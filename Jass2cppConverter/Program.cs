using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.IO;

namespace Jass2cppConverter
{
    class Program
    {
        struct GlobalVar
        {
            public string name;
            public string type;
            public bool isarray;
            public string defaultvalue;
            public bool isconstant;
        }

        struct FunctionArg
        {
            public string name;
            public string type;
        }

        struct Function
        {
            public string name;
            public string returntype;
            public string[] body;
            public string args;
        }
        static List<Function> Functions = null;
        static List<GlobalVar> Globals = null;
        static List<String> GlobalDefines = null;
        static List<String> GlobalVariables = null;
        static List<String> GlobalVariablesHeader = null;

        const string RegexBadLine1 = @"^\s*$";
        const string RegexBadLine2 = @"^\s*//.*";
        const string RegexGetStartGlobals = @"^\s*globals";
        const string RegexGetEndGlobals = @"^\s*endglobals";
        const string RegexGetFunctionNameAndVars = @"^\s*(constant\s+|)function\s+(.*?)\s+takes\s+(.*?)returns\s+(.*)$";
        const string RegexGetFunctionEnd = @"^\s*endfunction";

        const string RegexGetGlobalVarData = @"^\s*(constant\s+|)(\w+)\s+(array\s+|)(\w+)\s*(=.*|)";
        const string RegexGetValueFromVar = @"=\s*(.*)$";
        static string[] War3MapJdata = null;

        static string War3MapCppPath = string.Empty;


        static void BuildGlobalVars()
        {

            Globals = new List<GlobalVar>();

            bool GlobalStartFound = false;

            foreach (string str in War3MapJdata)
            {

                if (Regex.Match(str, RegexBadLine1).Success || Regex.Match(str, RegexBadLine2).Success)
                {
                    continue;
                }

                if (!GlobalStartFound && Regex.Match(str, RegexGetStartGlobals).Success)
                {
                    GlobalStartFound = true;
                    continue;
                }

                if (GlobalStartFound)
                {
                    if (Regex.Match(str, RegexGetEndGlobals).Success)
                    {
                        GlobalStartFound = false;
                        continue;
                    }

                    Match curGlobalDataMatch = Regex.Match(str, RegexGetGlobalVarData);
                    if (!curGlobalDataMatch.Success)
                    {
                        Console.WriteLine("Error! String:\"" + str + "\"....");
                        Console.ReadKey();
                        Console.WriteLine("Converter stop working! ");
                        Console.ReadKey();
                        Environment.Exit(0);
                        return;
                    }

                    GlobalVar tmpGlobalVarData = new GlobalVar();
                    tmpGlobalVarData.isconstant = curGlobalDataMatch.Groups[1].Value.ToLower().IndexOf("constant") > -1;
                    tmpGlobalVarData.isarray = curGlobalDataMatch.Groups[3].Value.ToLower().IndexOf("array") > -1;
                    tmpGlobalVarData.type = curGlobalDataMatch.Groups[2].Value.Trim();
                    tmpGlobalVarData.name = curGlobalDataMatch.Groups[4].Value.Trim();
                    tmpGlobalVarData.defaultvalue = curGlobalDataMatch.Groups[5].Value.Trim();
                    if (tmpGlobalVarData.defaultvalue != "")
                    {
                        if (Regex.Match(tmpGlobalVarData.defaultvalue, RegexGetValueFromVar).Success)
                            tmpGlobalVarData.defaultvalue = Regex.Match(tmpGlobalVarData.defaultvalue, RegexGetValueFromVar).Groups[1].Value.Trim();
                    }
                    Globals.Add(tmpGlobalVarData);

                }

            }
        }

        static void BuildFuncList()
        {
            Functions = new List<Function>();

            Function tempfunc = new Function();
            List<string> funcbody = new List<string>();
            foreach (string str in War3MapJdata)
            {
                if (Regex.Match(str, RegexBadLine1).Success || Regex.Match(str, RegexBadLine2).Success)
                {
                    continue;
                }
                Match FuncNameAndVars = null;
                if ((FuncNameAndVars = Regex.Match(str, RegexGetFunctionNameAndVars)).Success)
                {
                    tempfunc.name = FuncNameAndVars.Groups[2].Value;
                    tempfunc.args = FuncNameAndVars.Groups[3].Value;
                    tempfunc.returntype = FuncNameAndVars.Groups[4].Value;
                }

                if (Regex.Match(str, RegexGetFunctionNameAndVars).Success)
                {


                }
            }




        }

        static void Main(string[] args)
        {
            Console.WriteLine("Укажите файл c JASS скриптом для преобразования в JASS.cpp:");
            string War3MapJpath = Console.ReadLine();
            War3MapCppPath = War3MapJpath + ".cpp";
            Console.WriteLine("Загрузка файла...");
            War3MapJdata = File.ReadAllLines(War3MapJpath.Replace("\"", ""));

            Console.WriteLine("Загружено " + War3MapJdata.Length + " строк. Создается список глобальных переменных.");

            BuildGlobalVars();

            Console.WriteLine("Преобразование типов переменных в C++");

            GlobalDefines = new List<string>();
            GlobalVariables = new List<string>();
            GlobalVariablesHeader = new List<string>();


            foreach (GlobalVar tmpGlobalVar in Globals)
            {
                if (tmpGlobalVar.isconstant)
                {
                    GlobalDefines.Add("#define " + tmpGlobalVar.name + " " + tmpGlobalVar.defaultvalue);
                }
                else
                {
                    if (tmpGlobalVar.isarray)
                    {
                        GlobalVariables.Add(tmpGlobalVar.type + " " + tmpGlobalVar.name + "[8192];");
                        GlobalVariablesHeader.Add("extern " + tmpGlobalVar.type + " " + tmpGlobalVar.name + "[8192];");
                    }
                    else
                    {
                        if (tmpGlobalVar.defaultvalue != "")
                            GlobalVariables.Add(tmpGlobalVar.type + " " + tmpGlobalVar.name + " = " + tmpGlobalVar.defaultvalue + ";");
                        else
                            GlobalVariables.Add(tmpGlobalVar.type + " " + tmpGlobalVar.name + ";");

                        GlobalVariablesHeader.Add("extern " + tmpGlobalVar.type + " " + tmpGlobalVar.name + ";");
                    }

                }
            }

            Console.WriteLine("Загружено " + Globals.Count + " глобальных переменных.");
            Console.WriteLine("Создание списка функций.");

            BuildFuncList();
            Console.WriteLine("Загружено " + Functions.Count + " функций из JASS кода.");


            Console.WriteLine("Преобразование в CPP код....");

            File.Delete("out.cpp");
            File.Delete("out.h");

            File.AppendAllText("out.cpp", "//Global vars");
            File.AppendAllLines("out.cpp", GlobalVariables.ToArray());
            File.AppendAllText("out.cpp", "//Functions");



            File.AppendAllText("out.cpp", "//Global defines");
            File.AppendAllLines("out.h", GlobalDefines.ToArray());
            File.AppendAllText("out.cpp", "//Global vars");
            File.AppendAllLines("out.h", GlobalVariablesHeader.ToArray());
            File.AppendAllText("out.cpp", "//Functions");

            Console.WriteLine("Преобразование в CPP код завершено. ");

            Console.WriteLine("Создание JASS движка начинается...");



            Console.ReadLine();





        }
    }
}
