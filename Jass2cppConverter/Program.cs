using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.IO;
using System.Threading.Tasks;

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

        struct Function
        {
            public string name;
            public string returntype;
            public List<string> body;
            public string args;
        }

        static List<Function> Functions = null;
        static List<GlobalVar> Globals = null;
        static List<string> GlobalDefines = null;
        static List<string> GlobalVariables = null;
        static List<string> GlobalVariablesHeader = null;

        const string RegexBadLine1 = @"^\s*$";
        const string RegexBadLine2 = @"^\s*//.*";
        const string RegexGetStartGlobals = @"^\s*globals";
        const string RegexGetEndGlobals = @"^\s*endglobals";
        const string RegexGetGlobalVarData = @"^\s*(constant\s+|)(\w+)\s+(array\s+|)(\w+)\s*(=.*|)";
        const string RegexGetValueFromVar = @"=\s*(.*)$";
        const string RegexGetFunctionNameAndVars = @"^\s*(constant\s+|)function\s+(.+)\s+takes\s+(.+)\s+returns\s+(.+)$";
        const string RegexGetFunctionEnd = @"^\s*endfunction";
        const string RegexGetKeyWordLocal = @"^\s*local";
        const string RegexGetKeyWordSet = @"^\s*set";
        const string RegexGetKeyWordCall = @"^\s*call";
        const string RegexGetIfConditionEmpty = @"^\s*if\s*(.+)\s*then";
        const string RegexGetElseIfConditionEmpty = @"^\s*elseif\s*(.+)\s*then";
        const string RegexGetLoop = @"^\s*loop";
        const string RegexGetExitWhen = @"^\s*exitwhen\s*(.+)$";
        const string RegexGetEndLoop = @"^\s*endloop";

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
            bool foundfunc = false;

            foreach (string str in War3MapJdata)
            {
                if (Regex.Match(str, RegexBadLine1).Success || Regex.Match(str, RegexBadLine2).Success)
                {
                    continue;
                }

                if (foundfunc)
                {
                    if (Regex.Match(str, RegexGetFunctionEnd).Success)
                    {
                        foundfunc = false;
                        Functions.Add(tempfunc);
                        tempfunc = new Function();
                    }
                    else
                    {
                        tempfunc.body.Add(str);
                    }
                    continue;
                }

                Match FuncNameAndVars = null;
                if ((FuncNameAndVars = Regex.Match(str, RegexGetFunctionNameAndVars)).Success)
                {
                    tempfunc.name = FuncNameAndVars.Groups[2].Value;
                    tempfunc.args = FuncNameAndVars.Groups[3].Value;
                    tempfunc.returntype = FuncNameAndVars.Groups[4].Value;

                    tempfunc.returntype = Regex.Replace(tempfunc.returntype, @"\bnothing\b", "void");
                    tempfunc.args = Regex.Replace(tempfunc.args, @"\bnothing\b", "");

                    tempfunc.body = new List<string>();
                    foundfunc = true;
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
                        GlobalVariables.Add("JASSCPP::" + tmpGlobalVar.type + " " + tmpGlobalVar.name + "[32768];");
                        GlobalVariablesHeader.Add("extern JASSCPP::" + tmpGlobalVar.type + " " + tmpGlobalVar.name + "[32768];");
                    }
                    else
                    {
                        if (tmpGlobalVar.defaultvalue != "")
                            GlobalVariables.Add("JASSCPP::" + tmpGlobalVar.type + " " + tmpGlobalVar.name + " = " + tmpGlobalVar.defaultvalue + ";");
                        else
                            GlobalVariables.Add("JASSCPP::" + tmpGlobalVar.type + " " + tmpGlobalVar.name + ";");

                        GlobalVariablesHeader.Add("extern JASSCPP::" + tmpGlobalVar.type + " " + tmpGlobalVar.name + ";");
                    }
                }
            }

            Console.WriteLine("Загружено " + Globals.Count + " глобальных переменных.");
            Console.WriteLine("Создание списка функций.");
            BuildFuncList();
            Console.WriteLine("Загружено " + Functions.Count + " функций из JASS кода.");

            Console.WriteLine("Преобразование в CPP код....");
            File.Delete("war3map.cpp");
            File.Delete("war3map.h");

            StringBuilder cppBuilder = new StringBuilder();
            StringBuilder headerBuilder = new StringBuilder();

            cppBuilder.AppendLine("#include \"war3map.h\"");
            cppBuilder.AppendLine("namespace war3map\n{");

            cppBuilder.AppendLine("//Global vars");
            cppBuilder.AppendLine(string.Join("\n", GlobalVariables));

            headerBuilder.AppendLine("namespace war3map\n{");
            headerBuilder.AppendLine("//Global defines");
            headerBuilder.AppendLine(string.Join("\n", GlobalDefines));
            headerBuilder.AppendLine("//Global vars");
            headerBuilder.AppendLine(string.Join("\n", GlobalVariablesHeader));

            cppBuilder.AppendLine("//Functions");
            headerBuilder.AppendLine("//Functions");

            foreach (var func in Functions)
            {
                headerBuilder.AppendLine((func.returntype.Length > 0 && func.returntype != "void" ? "JASSCPP::" + func.returntype : func.returntype ) + " " + func.name + "(" + func.args + ");");

                cppBuilder.AppendLine((func.returntype.Length > 0 && func.returntype != "void" ? "JASSCPP::" + func.returntype : func.returntype) + " " + func.name + "(" + func.args + ")");
                cppBuilder.AppendLine("{");

                int indentLevel = 1;
                for (int index = 0; index < func.body.Count; index++)
                {
                    if (index + 1 < func.body.Count)
                    {
                        if (func.body[index].Length > 1 && func.body[index + 1].Length > 0 && func.body[index + 1][0] == '"')
                        {
                            func.body[index] = func.body[index].Remove(func.body[index].Length - 1) + "\"\\\\n\"";
                            func.body[index + 1] = "";
                        }
                    }

                    string funcline = func.body[index];
                    if (funcline.Length == 0)
                    {
                        continue;
                    }

                    string cleanline = funcline;
                    string indent = new string(' ', funcline.Length - funcline.TrimStart().Length);

                    if (Regex.IsMatch(cleanline, RegexGetKeyWordLocal))
                    {
                        cleanline = Regex.Replace(cleanline, RegexGetKeyWordLocal, "").Trim();
                        cleanline = "JASSCPP::" + cleanline + ";";
                    }

                    if (Regex.IsMatch(cleanline, RegexGetKeyWordSet))
                    {
                        cleanline = Regex.Replace(cleanline, RegexGetKeyWordSet, "").Trim() + ";";
                    }

                    if (Regex.IsMatch(cleanline, RegexGetKeyWordCall))
                    {
                        cleanline = Regex.Replace(cleanline, RegexGetKeyWordCall, "").Trim() + ";";
                    }

                    cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                    cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                    cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");
                    cleanline = Regex.Replace(cleanline, @"\s+", " ").Trim();

                    if (Regex.IsMatch(cleanline, @"^\s*return\b"))
                    {
                        cleanline = Regex.Replace(cleanline, @"\breturn\b", "return").Trim() + ";";
                    }

                    if (Regex.IsMatch(cleanline, RegexGetIfConditionEmpty))
                    {
                        var condition = Regex.Match(cleanline, RegexGetIfConditionEmpty).Groups[1].Value.Trim();
                        if (condition.StartsWith("(") && condition.EndsWith(")"))
                        { 
                            int openBrackets = 0;
                            int closeBrackets = 0;
                            bool mismatchFound = false;
                            bool foundOpen = false;
                            bool foundClose = true;
                            string checkcondition = condition;
                            checkcondition = checkcondition.Remove(0, 1);
                            checkcondition = checkcondition.Remove(checkcondition.Length - 1, 1);
                            foreach (char c in checkcondition)
                            {
                                if (c == '(')
                                {
                                    if (!foundClose)
                                    {
                                        mismatchFound = true;
                                    }
                                    openBrackets++;
                                    foundOpen = true;
                                    foundClose = false;
                                }
                                else if (c == ')')
                                {
                                    closeBrackets++;
                                    if (closeBrackets > openBrackets || !foundOpen)
                                    {
                                        mismatchFound = true;
                                        break;
                                    }
                                    foundOpen = false;
                                    foundClose = true;
                                }
                            }

                            if (openBrackets != closeBrackets || mismatchFound || !foundClose)
                            {
                                cleanline = indent + "if (" + condition + ")";
                            }
                            else
                            { 
                                cleanline = indent + "if " + condition + "";
                            }
                        }
                        else
                        {
                            cleanline = indent + "if (" + condition + ")";
                        }
                        cppBuilder.AppendLine(cleanline);
                        cppBuilder.AppendLine(indent + "{");
                        indentLevel++;
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetElseIfConditionEmpty))
                    {
                        var condition = Regex.Match(cleanline, RegexGetElseIfConditionEmpty).Groups[1].Value.Trim();
                        if (condition.StartsWith("(") && condition.EndsWith(")"))
                        {
                            int openBrackets = 0;
                            int closeBrackets = 0;
                            bool mismatchFound = false;
                            bool foundOpen = false;
                            bool foundClose = true;
                            string checkcondition = condition;
                            checkcondition = checkcondition.Remove(0, 1);
                            checkcondition = checkcondition.Remove(checkcondition.Length - 1, 1);
                            foreach (char c in checkcondition)
                            {
                                if (c == '(')
                                {
                                    if (!foundClose)
                                    {
                                        mismatchFound = true;
                                    }
                                    openBrackets++;
                                    foundOpen = true;
                                    foundClose = false;
                                }
                                else if (c == ')')
                                {
                                    closeBrackets++;
                                    if (closeBrackets > openBrackets || !foundOpen)
                                    {
                                        mismatchFound = true;
                                        break;
                                    }
                                    foundOpen = false;
                                    foundClose = true;
                                }
                            }

                            if (openBrackets != closeBrackets || mismatchFound || !foundClose)
                            {
                                cleanline = indent + "}\n " + indent + "else if (" + condition + ")";
                            }
                            else
                            {
                                cleanline = indent + "}\n " + indent + "else if " + condition + "";
                            }
                        }
                        else
                        {
                            cleanline = indent + "}\n " + indent + "else if (" + condition + ")";
                        }
                        cppBuilder.AppendLine(cleanline);
                        cppBuilder.AppendLine(indent + "{");
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, @"^\s*else\b"))
                    {
                        cleanline = indent + "}\n " + indent + "else\n" + indent + "{";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, @"^\s*endif\b"))
                    {
                        indentLevel--;
                        cleanline = indent + "}";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetLoop))
                    {
                        cleanline = indent + "while (true)";
                        cppBuilder.AppendLine(cleanline);
                        cppBuilder.AppendLine(indent + "{");
                        indentLevel++;
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetExitWhen))
                    {
                        var condition = Regex.Match(cleanline, RegexGetExitWhen).Groups[1].Value.Trim();
                        cleanline = indent + "if (" + condition + ") break;";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetEndLoop))
                    {
                        indentLevel--;
                        cleanline = indent + "}";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }

                    if (cleanline.StartsWith("//"))
                    {
                        cleanline = indent + cleanline;
                    }

                    cleanline = indent + cleanline;
                    cppBuilder.AppendLine(cleanline);
                }

                cppBuilder.AppendLine("}");
            }

            cppBuilder.AppendLine("}");
            headerBuilder.AppendLine("}");

            File.AppendAllText("war3map.cpp", cppBuilder.ToString());
            File.AppendAllText("war3map.h", headerBuilder.ToString());

            Console.WriteLine("Преобразование в CPP код завершено. ");
            Console.WriteLine("Создание JASS движка начинается...");
            Console.ReadLine();
        }
    }
}