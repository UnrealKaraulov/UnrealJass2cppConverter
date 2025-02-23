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
        struct JassVar
        {
            public string name;
            public string type;
            public bool isarray;
            public string defaultvalue;
            public bool isconstant;
            public string comment;
        }

        struct Function
        {
            public string name;
            public string returntype;
            public List<JassVar> vars;
            public List<string> body;
            public string args;
        }

        static List<Function> Functions = null;
        static List<JassVar> Globals = null;
        static List<string> GlobalDefines = null;
        static List<string> GlobalVariables = null;
        static List<string> GlobalVariablesHeader = null;

        const string RegexBadLine1 = @"^\s*$";
        const string RegexBadLine2 = @"^\s*//";
        const string RegexGetStartGlobals = @"^\s*globals\s*$";
        const string RegexGetEndGlobals = @"^\s*endglobals\s*$";
        const string RegexGetVarData = @"^\s*(constant\s+|local\s+|)(\w+)\s+(array\s+|)(\w+)\s*(=.*|)\s*$";
        const string RegexGetValueFromVar = @"=\s*(.*)$";
        const string RegexGetFunctionNameAndVars = @"^\s*(constant\s+|)function\s+(.+)\s+takes\s+(.+)\s+returns\s+(.+)$";
        const string RegexGetFunctionEnd = @"^\s*endfunction\s*$";
        const string RegexGetKeyWordLocal = @"^\s*local\b.*$";
        const string RegexGetKeyWordSet = @"^\s*set\b";
        const string RegexGetKeyWordCall = @"^\s*call\b";
        const string RegexGetIfConditionEmpty = @"^\s*if\s*(.+)\s*then\s*$";
        const string RegexGetElseIfConditionEmpty = @"^\s*elseif\s*(.+)\s*then\s*$";
        const string RegexGetLoop = @"^\s*loop\s*$";
        const string RegexGetExitWhen = @"^\s*exitwhen\s*(.+)$";
        const string RegexGetEndLoop = @"^\s*endloop\s*$";

        static string[] War3MapJdata = null;
        static string War3MapCppPath = string.Empty;

        static string getIndent(int level)
        {
            string outstr = "";
            for (int i = 0; i < level; i++)
            {
                outstr += "    ";
            }
            return outstr;
        }

        static void BuildGlobalVars()
        {
            string lastCommentString = "";
            Globals = new List<JassVar>();
            bool GlobalStartFound = false;

            foreach (string str in War3MapJdata)
            {
                if (Regex.Match(str, RegexBadLine1).Success)
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

                    Match curGlobalDataMatch = Regex.Match(str, RegexGetVarData);
                    if (Regex.Match(str, RegexBadLine2).Success || !curGlobalDataMatch.Success)
                    {
                        lastCommentString = str.Trim();
                        return;
                    }

                    JassVar tmpGlobalVarData = new JassVar();
                    tmpGlobalVarData.isconstant = curGlobalDataMatch.Groups[1].Value.ToLower().IndexOf("constant") > -1;
                    tmpGlobalVarData.isarray = curGlobalDataMatch.Groups[3].Value.ToLower().IndexOf("array") > -1;
                    tmpGlobalVarData.type = curGlobalDataMatch.Groups[2].Value.Trim();
                    tmpGlobalVarData.name = curGlobalDataMatch.Groups[4].Value.Trim();
                    tmpGlobalVarData.defaultvalue = curGlobalDataMatch.Groups[5].Value.Trim();
                    tmpGlobalVarData.comment = lastCommentString;
                    if (!tmpGlobalVarData.comment.StartsWith("//"))
                        tmpGlobalVarData.comment = "//" + tmpGlobalVarData.comment;
                    lastCommentString = "";
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
            bool foundfunc = false;
            bool readvars = false;
            string lastCommentString = "";

            foreach (var _str in War3MapJdata)
            {
                string str = _str;

                if (Regex.Match(str, RegexBadLine1).Success)
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
                        if (readvars && (Regex.IsMatch(str, RegexGetKeyWordLocal) || Regex.Match(str, RegexBadLine2).Success))
                        {
                            Match curGlobalDataMatch = Regex.Match(str, RegexGetVarData);
                            if (Regex.Match(str, RegexBadLine2).Success || !curGlobalDataMatch.Success)
                            {
                                lastCommentString = str.Trim();
                                continue;
                            }

                            JassVar tmpLocalVarData = new JassVar();
                            tmpLocalVarData.isconstant = curGlobalDataMatch.Groups[1].Value.ToLower().IndexOf("constant") > -1;
                            tmpLocalVarData.isarray = curGlobalDataMatch.Groups[3].Value.ToLower().IndexOf("array") > -1;
                            tmpLocalVarData.type = curGlobalDataMatch.Groups[2].Value.Trim();
                            tmpLocalVarData.name = curGlobalDataMatch.Groups[4].Value.Trim();
                            tmpLocalVarData.defaultvalue = curGlobalDataMatch.Groups[5].Value.Trim();
                            tmpLocalVarData.comment = lastCommentString;
                            lastCommentString = "";
                            if (tmpLocalVarData.defaultvalue != "")
                            {
                                if (Regex.Match(tmpLocalVarData.defaultvalue, RegexGetValueFromVar).Success)
                                    tmpLocalVarData.defaultvalue = Regex.Match(tmpLocalVarData.defaultvalue, RegexGetValueFromVar).Groups[1].Value.Trim();
                            }
                            tempfunc.vars.Add(tmpLocalVarData);
                        }
                        else
                        {
                            readvars = false;
                            tempfunc.body.Add(str);
                        }
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
                    tempfunc.vars = new List<JassVar>();
                    foundfunc = true;
                    readvars = true;
                }
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Укажите файл c JASS скриптом для преобразования в JASS.cpp:");
            string War3MapJpath = Console.ReadLine();
            War3MapCppPath = War3MapJpath + ".cpp";
            Console.WriteLine("Загрузка файла...");
            string[] _tmpWar3MapJdata = File.ReadAllLines(War3MapJpath.Replace("\"", ""));
            List<string> _tmpWar3MapJdataFixComments = new List<string>();

            for (int i = 0; i < _tmpWar3MapJdata.Length; i++)
            {
                if (Regex.Match(_tmpWar3MapJdata[i], @"^.+?\w.*//.*$").Success)
                {
                    var left_part = Regex.Match(_tmpWar3MapJdata[i], @"^(.*?\w.*?)//.*$").Groups[1].Value.Trim();
                    var right_part = Regex.Match(_tmpWar3MapJdata[i], @"^.*?\w.*?(//.*)$").Groups[1].Value.Trim();
                    int count = right_part.Count(c => c == '"');
                    if (count == 0 || count % 2 == 0)
                    {
                        _tmpWar3MapJdataFixComments.Add(right_part);
                        _tmpWar3MapJdataFixComments.Add(left_part);
                    }
                    else
                    {
                        _tmpWar3MapJdataFixComments.Add(_tmpWar3MapJdata[i]);
                    }
                }
                else
                {
                    _tmpWar3MapJdataFixComments.Add(_tmpWar3MapJdata[i]);
                }
            }

            War3MapJdata = _tmpWar3MapJdataFixComments.ToArray();

            //File.WriteAllLines("war3map_comments.j", War3MapJdata);

            Console.WriteLine("Загружено " + War3MapJdata.Length + " строк. Создается список глобальных переменных.");
            BuildGlobalVars();

            Console.WriteLine("Преобразование типов переменных в C++");
            GlobalDefines = new List<string>();
            GlobalVariables = new List<string>();
            GlobalVariablesHeader = new List<string>();

            foreach (JassVar tmpGlobalVar in Globals)
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
                headerBuilder.AppendLine((func.returntype.Length > 0 && func.returntype != "void" ? "JASSCPP::" + func.returntype : func.returntype) + " " + func.name + "(" + func.args + ");");

                cppBuilder.AppendLine((func.returntype.Length > 0 && func.returntype != "void" ? "JASSCPP::" + func.returntype : func.returntype) + " " + func.name + "(" + func.args + ")");
                cppBuilder.AppendLine("{");

                foreach (JassVar tmpLocalVar in func.vars)
                {
                    if (tmpLocalVar.isconstant)
                    {
                        cppBuilder.AppendLine(getIndent(1) + "#define " + tmpLocalVar.name + " " + tmpLocalVar.defaultvalue);
                    }
                    else
                    {
                        if (tmpLocalVar.isarray)
                        {
                            cppBuilder.AppendLine(getIndent(1) + "JASSCPP::" + tmpLocalVar.type + " " + tmpLocalVar.name + "[32768];");
                        }
                        else
                        {
                            if (tmpLocalVar.defaultvalue != "")
                                cppBuilder.AppendLine(getIndent(1) + "JASSCPP::" + tmpLocalVar.type + " " + tmpLocalVar.name + " = " + tmpLocalVar.defaultvalue + ";");
                            else
                                cppBuilder.AppendLine(getIndent(1) + "JASSCPP::" + tmpLocalVar.type + " " + tmpLocalVar.name + ";");
                        }
                    }
                }

                int indentLevel = 1;
                for (int index = 0; index < func.body.Count; index++)
                {
                    if (index + 1 < func.body.Count)
                    {
                        if (func.body[index].Length > 1 && func.body[index + 1].Length > 0 && func.body[index + 1][0] == '"')
                        {
                            while (func.body[index].Length > 0)
                            {
                                if (func.body[index][func.body[index].Length - 1] == '=')
                                    break;
                                else
                                    func.body[index] = func.body[index].Remove(func.body[index].Length - 1);
                            }

                            func.body[index] += "\"\\\\n\"";
                            func.body[index + 1] = "";
                        }
                    }

                    string funcline = func.body[index];
                    if (funcline.Length == 0)
                    {
                        continue;
                    }

                    string cleanline = funcline.Trim();

                    if (cleanline.StartsWith("//"))
                    {
                        cleanline = getIndent(indentLevel) + cleanline;
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }

                    if (Regex.IsMatch(cleanline, RegexGetKeyWordSet))
                    {
                        cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                        cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                        cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");
                        cleanline = Regex.Replace(cleanline, RegexGetKeyWordSet, "").Trim() + ";";
                    }

                    if (Regex.IsMatch(cleanline, RegexGetKeyWordCall))
                    {
                        cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                        cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                        cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");
                        cleanline = Regex.Replace(cleanline, RegexGetKeyWordCall, "").Trim() + ";";
                    }

                    if (Regex.IsMatch(cleanline, @"^\s*return\b.*"))
                    {
                        cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                        cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                        cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");
                        cleanline = Regex.Replace(cleanline, @"\breturn\b", "return").Trim() + ";";
                    }

                    if (Regex.IsMatch(cleanline, RegexGetIfConditionEmpty))
                    {
                        cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                        cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                        cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");

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
                                cleanline = getIndent(indentLevel) + "if (" + condition + ")";
                            }
                            else
                            {
                                cleanline = getIndent(indentLevel) + "if " + condition + "";
                            }
                        }
                        else
                        {
                            cleanline = getIndent(indentLevel) + "if (" + condition + ")";
                        }
                        cppBuilder.AppendLine(cleanline);
                        cppBuilder.AppendLine(getIndent(indentLevel) + "{");
                        indentLevel++;
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetElseIfConditionEmpty))
                    {
                        indentLevel--;
                        cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                        cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                        cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");

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
                                cleanline = getIndent(indentLevel) + "}\n " + getIndent(indentLevel) + "else if (" + condition + ")";
                            }
                            else
                            {
                                cleanline = getIndent(indentLevel) + "}\n " + getIndent(indentLevel) + "else if " + condition + "";
                            }
                        }
                        else
                        {
                            cleanline = getIndent(indentLevel) + "}\n " + getIndent(indentLevel) + "else if (" + condition + ")";
                        }
                        cppBuilder.AppendLine(cleanline);
                        cppBuilder.AppendLine(getIndent(indentLevel) + "{");
                        indentLevel++;
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, @"^\s*else\b.*$"))
                    {
                        indentLevel--;
                        cleanline = getIndent(indentLevel) + "}\n" + getIndent(indentLevel) + "else\n" + getIndent(indentLevel) + "{";
                        indentLevel++;
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, @"^\s*endif\b.*$"))
                    {
                        indentLevel--;
                        cleanline = getIndent(indentLevel) + "}";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetLoop))
                    {
                        cleanline = getIndent(indentLevel) + "while (true)";
                        cppBuilder.AppendLine(cleanline);
                        cppBuilder.AppendLine(getIndent(indentLevel) + "{");
                        indentLevel++;
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetExitWhen))
                    {
                        cleanline = Regex.Replace(cleanline, @"\band\b", "&&");
                        cleanline = Regex.Replace(cleanline, @"\bor\b", "||");
                        cleanline = Regex.Replace(cleanline, @"\bnot\b\s*", "!");
                        var condition = Regex.Match(cleanline, RegexGetExitWhen).Groups[1].Value.Trim();
                        cleanline = getIndent(indentLevel) + "if (" + condition + ") break;";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }
                    else if (Regex.IsMatch(cleanline, RegexGetEndLoop))
                    {
                        indentLevel--;
                        cleanline = getIndent(indentLevel) + "}";
                        cppBuilder.AppendLine(cleanline);
                        continue;
                    }

                    cleanline = getIndent(indentLevel) + cleanline;

                    cppBuilder.AppendLine(cleanline);
                }

                cppBuilder.AppendLine("}");
            }

            cppBuilder.AppendLine("}");
            headerBuilder.AppendLine("}");

            File.AppendAllText("war3map.cpp", cppBuilder.ToString());
            File.AppendAllText("war3map.h", headerBuilder.ToString());

            Console.WriteLine("Преобразование в CPP код завершено!");
            //Console.WriteLine("Создание JASS движка начинается...");
            Console.ReadLine();
        }
    }
}