using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.IO;

namespace JassEngineBuilder
{
    class Program
    {
        struct argstruct
        {
            public string argtype;
            public string argname;
        }

        struct _funcaddr
        {
            public string funcname;
            public string funcaddr;
        }

        struct FuncStruct
        {
            public string FuncName;
            public string FuncType;
            public argstruct[] FuncArgs;
            public string FuncAddr;
        }

        struct PrintGetType
        {
            public string VarType;
            public string PrintType;
            public string readtype;
        }


        static List<FuncStruct> JassNativeFunctions = new List<FuncStruct>();

        static List<argstruct> TypedefList = new List<argstruct>();

        static List<PrintGetType> PrintTypeList = new List<PrintGetType>();

        static string DefaultPrintType = "%s";

        static void WriteToJassNativesList(string str)
        {
            if (!File.Exists(".\\JassNativesList.h"))
            {
                File.Create(".\\JassNativesList.h").Close();
            }

            File.AppendAllText(".\\JassNativesList.h", str + "\n");
        }

        static void WriteToJassNativesListInitialzier(string str)
        {
            if (!File.Exists(".\\JassNativesList.cpp"))
            {
                File.Create(".\\JassNativesList.cpp").Close();
            }

            File.AppendAllText(".\\JassNativesList.cpp", str + "\n");
        }

        static void WriteToJassEngineInit(string str)
        {
            if (!File.Exists(".\\JassEngineInit.cpp"))
            {
                File.Create(".\\JassEngineInit.cpp").Close();
            }

            File.AppendAllText(".\\JassEngineInit.cpp", str + "\n");
        }

        static void WriteToJassDefineHeader(string str)
        {
            if (!File.Exists(".\\JassDefineHeader.h"))
            {
                File.Create(".\\JassDefineHeader.h").Close();
            }

            File.AppendAllText(".\\JassDefineHeader.h", str + "\n");
        }



        static void Main(string[] args)
        {
            string RegexFuncInfo = @"^\s*(\w+.*?)__cdecl\s*(\w+)\((.*?\))$";
            string RegexFuncArgs = @"(\w+)([\s|\*]+\w+)\W\s*";
            string RegexFuncAddr = @"^\s*add\s+eax\s*,\s*(\w+)";
            string[] CJassData = File.ReadAllLines("CJass.cpp");
            // List<_funcaddr> funcaddrlist = new List<_funcaddr>();

            //if (File.Exists("Functions.txt"))
            //{
            //    Console.WriteLine("Found Functions.txt file. Read function address from this file...");
            //    string[] FunctionsListAddr = File.ReadAllLines("Functions.txt");

            //    Console.WriteLine("Functions.txt lenght:" + FunctionsListAddr.Length);
            //    //"Deg2Rad" located at 0x1DF360 with parameters "(R)R"
            //    string GetFuncNameAndAddr = @"""(\w+)""\s.*?(0x\w+)";
            //    int loadedaddress = 0;
            //    Match GetFuncAddress = null;
            //    foreach (string s in FunctionsListAddr)
            //    {
            //        if ((GetFuncAddress = Regex.Match(s, GetFuncNameAndAddr)).Success)
            //        {
            //            loadedaddress++;
            //            _funcaddr tmpstr = new _funcaddr();
            //            tmpstr.funcaddr = GetFuncAddress.Groups[2].Value;
            //            tmpstr.funcname = GetFuncAddress.Groups[1].Value;
            //            funcaddrlist.Add(tmpstr);
            //        }
            //    }

            //    Console.WriteLine("Load:" + loadedaddress + " addr count.");
            //}


            int index = 0;

            if (File.Exists(".\\JassNativesList.h"))
            {
                File.Delete(".\\JassNativesList.h");
            }
            if (File.Exists(".\\JassDefineHeader.h"))
            {
                File.Delete(".\\JassDefineHeader.h");
            }

            if (File.Exists(".\\JassEngineInit.cpp"))
            {
                File.Delete(".\\JassEngineInit.cpp");
            }

            if (File.Exists(".\\JassNativesList.cpp"))
            {
                File.Delete(".\\JassNativesList.cpp");
            }


            while (index < CJassData.Length)
            {
                Match GetFuncInfo = Regex.Match(CJassData[index], RegexFuncInfo);
                if (GetFuncInfo.Success)
                {
                    string FuncType = GetFuncInfo.Groups[1].Value.Trim();
                    string FuncName = GetFuncInfo.Groups[2].Value.Trim();
                    string argsstring = GetFuncInfo.Groups[3].Value.Trim();

                    List<argstruct> FuncArgs = new List<argstruct>();

                    foreach (Match GetFuncArgs in Regex.Matches(argsstring, RegexFuncArgs))
                    {
                        if (!GetFuncArgs.Success && argsstring != ")")
                        {
                            Console.WriteLine("ERROR:" + argsstring);
                            Console.ReadLine();
                        }


                        int argscount = GetFuncArgs.Groups.Count / 2;
                        for (int i = 0; i < argscount; i++)
                        {
                            argstruct tmparg = new argstruct();
                            tmparg.argname =
                                GetFuncArgs.Groups[i + 2].Value.Trim().Replace(",", "").Trim().Replace('*', '&');
                            tmparg.argtype =
                                GetFuncArgs.Groups[i + 1].Value.Trim().Replace(",", "").Trim().Replace('*', '&');


                            FuncArgs.Add(tmparg);
                        }
                    }


                    FuncStruct NewFunction = new FuncStruct();
                    NewFunction.FuncAddr = "0";
                    NewFunction.FuncArgs = FuncArgs.ToArray();
                    NewFunction.FuncName = FuncName.Trim();

                    NewFunction.FuncType = FuncType.Trim();
                    JassNativeFunctions.Add(NewFunction);

                }
                index++;
            }

            argstruct DefaultVars = new argstruct();
            DefaultVars.argname = "float";
            DefaultVars.argtype = "//";
            TypedefList.Add(DefaultVars);
            DefaultVars.argname = "float &";
            DefaultVars.argtype = "//";
            TypedefList.Add(DefaultVars);
            DefaultVars.argname = "int";
            DefaultVars.argtype = "//";
            TypedefList.Add(DefaultVars);
            DefaultVars.argname = "BOOL";
            DefaultVars.argtype = "//";
            TypedefList.Add(DefaultVars);
            DefaultVars.argname = "void";
            DefaultVars.argtype = "//";
            TypedefList.Add(DefaultVars);
            DefaultVars.argname = "DWFP";
            DefaultVars.argtype = "//";
            TypedefList.Add(DefaultVars);

            for (int i = 0; i < JassNativeFunctions.Count; i++)
            {
                bool needadd = true;
                foreach (argstruct str in TypedefList)
                {
                    if (str.argname == JassNativeFunctions[i].FuncType)
                    {
                        needadd = false;
                        break;
                    }
                }

                if (needadd)
                {
                    argstruct temp = new argstruct();
                    temp.argname = JassNativeFunctions[i].FuncType;
                    temp.argtype = "typedef int ";
                    TypedefList.Add(temp);
                }
            }

            for (int i = 0; i < JassNativeFunctions.Count; i++)
            {
                foreach (argstruct FuncArg in JassNativeFunctions[i].FuncArgs)
                {
                    bool needadd = true;
                    foreach (argstruct str in TypedefList)
                    {
                        if (str.argname == FuncArg.argtype)
                        {
                            needadd = false;
                            break;
                        }
                    }
                    if (needadd)
                    {
                        argstruct temp = new argstruct();
                        temp.argname = FuncArg.argtype;
                        temp.argtype = "typedef int ";
                        TypedefList.Add(temp);
                    }
                }
            }

            WriteToJassDefineHeader("#pragma once");
            WriteToJassDefineHeader("namespace JASSCPP {");
            WriteToJassDefineHeader("union DWFP");
            WriteToJassDefineHeader("{");
            WriteToJassDefineHeader("unsigned int dw;");
            WriteToJassDefineHeader("float fl;");
            WriteToJassDefineHeader("};");

            foreach (argstruct str in TypedefList)
            {
                WriteToJassDefineHeader(str.argtype + str.argname + ";");
            }
            WriteToJassDefineHeader("};");

            WriteToJassNativesList("#pragma once");
            WriteToJassNativesList("#include <Windows.h>");
            WriteToJassNativesList("#include <stdio.h>");
            WriteToJassNativesList("#include \"JassDefineHeader.h\"");
            WriteToJassNativesList("namespace JASSCPP {");
            WriteToJassNativesList("extern int GameDll;");

            WriteToJassNativesList("typedef int(__fastcall *LookupNative)(const char *,int unknown);");
            WriteToJassNativesList("extern LookupNative LookupNative_org;");


            WriteToJassNativesListInitialzier("#include \"JassNativesList.h\"");
            WriteToJassNativesListInitialzier("namespace JASSCPP {");
            WriteToJassNativesListInitialzier("LookupNative LookupNative_org = NULL;");

            WriteToJassEngineInit("#pragma comment(lib, \"libMinHook.x86.lib\")");

            WriteToJassEngineInit("#include <Windows.h>");
            WriteToJassEngineInit("#include <sstream>");
            WriteToJassEngineInit("#include <string>");
            WriteToJassEngineInit("#include \"JassDefineHeader.h\"");
            WriteToJassEngineInit("#include \"JassNativesList.h\"");
            WriteToJassEngineInit("#include \"MinHook.h\"");
            WriteToJassEngineInit("namespace JASSCPP {");
            WriteToJassEngineInit("int GameDll = (int) GetModuleHandleA( \"Game.dll\");");

            WriteToJassEngineInit("FILE * logfile;");
            WriteToJassNativesList("extern FILE * logfile;");

            WriteToJassEngineInit("char funcname1[] = \"NULLNAME\";");
            WriteToJassNativesList("extern char funcname1[];");
            WriteToJassEngineInit("char funcname2[] = \"NULLNAME\";");
            WriteToJassNativesList("extern char funcname2[];");

            WriteToJassEngineInit("void EngineJassLog( const char * format , ... )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("	/*char buffer[ 256 ]; va_list args; va_start( args , format );");
            WriteToJassEngineInit("	vsprintf_s( buffer , 256 , format , args ); va_end( args );");
            WriteToJassEngineInit("	int lentowrite = strlen( buffer );");
            WriteToJassEngineInit("	fwrite( &buffer , lentowrite , 1 , logfile ); fflush( logfile );*/");
            WriteToJassEngineInit("	va_list args;\n va_start( args , format );\n vfprintf_s( logfile , format , args );\n va_end( args );\n /*fflush( logfile );*/");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("std::string GetStrID( int id )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("    char buff[ 7 ];");
            WriteToJassEngineInit("    char buff2[ 4 ];");
            WriteToJassEngineInit("    CopyMemory( buff2 , &id , 4 );");
            WriteToJassEngineInit("    buff[ 0 ] = \'\\'\';");
            WriteToJassEngineInit("    buff[ 1 ] = buff2[ 3 ];");
            WriteToJassEngineInit("    buff[ 2 ] = buff2[ 2 ];");
            WriteToJassEngineInit("	   buff[ 3 ] = buff2[ 1 ];");
            WriteToJassEngineInit("    buff[ 4 ] = buff2[ 0 ];");
            WriteToJassEngineInit("    buff[ 5 ] = \'\\'\';");
            WriteToJassEngineInit("    buff[ 6 ] = \'\\0\';");
            WriteToJassEngineInit("    bool needreturnid = true;");
            WriteToJassEngineInit("    for ( int i = 1; i < 5; i++ )");
            WriteToJassEngineInit("    {");
            WriteToJassEngineInit("        if ( !isalnum( buff[ i ] ) )");
            WriteToJassEngineInit("        {");
            WriteToJassEngineInit("            needreturnid = false;");
            WriteToJassEngineInit("            break;");
            WriteToJassEngineInit("        }");
            WriteToJassEngineInit("    }");
            WriteToJassEngineInit("    if ( needreturnid )");
            WriteToJassEngineInit("      return std::string( buff );");
            WriteToJassEngineInit("    return std::to_string( id );");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("const char * BoolToStr( BOOL boolean )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("    return boolean ? \"true\" : \"false\";");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("float GetFloatFromDWFP( DWFP val )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("    return val.fl;");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("char * ReadJassStringNormal( int JASSSTRING )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("    if ( JASSSTRING == NULL || JASSSTRING >= INT_MAX ) { return NULL; }");
            WriteToJassEngineInit("    int offset1 = *( int* ) ( ( int ) JASSSTRING + 8 );");
            WriteToJassEngineInit("    if ( offset1 == NULL || offset1 >= INT_MAX ) { return NULL; }");
            WriteToJassEngineInit("    int offset2 = *( int * ) ( ( *( int* ) ( ( int ) JASSSTRING + 8 ) ) + 0x1C );");
            WriteToJassEngineInit("    if ( offset2 == NULL || offset2 >= INT_MAX ) { return NULL; }");
            WriteToJassEngineInit("    return *( char ** ) ( ( *( int* ) ( ( int ) JASSSTRING + 8 ) ) + 0x1C );");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("char * ReadJassSID(int JSID)");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("    int Convert = GameDll + 0x459640; int GetCurrentJassEnvironment = GameDll + 0x44B2E0;");
            WriteToJassEngineInit("    char * cRet = NULL;");
            WriteToJassEngineInit("    __asm");
            WriteToJassEngineInit("    {");
            WriteToJassEngineInit("        push JSID;");
            WriteToJassEngineInit("        mov ecx, 1;");
            WriteToJassEngineInit("        call GetCurrentJassEnvironment;");
            WriteToJassEngineInit("        mov ecx, eax;");
            WriteToJassEngineInit("        call Convert;");
            WriteToJassEngineInit("        mov ecx,dword ptr ds:[eax+0x08];");
            WriteToJassEngineInit("        mov eax,dword ptr ds:[ecx+0x1C];");
            WriteToJassEngineInit("        mov cRet, eax;");
            WriteToJassEngineInit("    }");
            WriteToJassEngineInit("    return cRet;");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("std::string GetUnitHID( int unitid )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("   if ( unitid == 0 ) return \"null\";");
            WriteToJassEngineInit("       std::stringstream s; s << unitid; s << \"(\" << GetStrID( GetUnitTypeId_org(unitid) ) << \")\";");
            WriteToJassEngineInit("    return s.str( );");
            WriteToJassEngineInit("}");

            WriteToJassEngineInit("std::string GetItemHID( int itemid )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("   if ( itemid == 0 ) return \"null\";");
            WriteToJassEngineInit("        std::stringstream s; s << itemid; s << \"(\" << GetStrID( GetItemTypeId_org( itemid ) ) << \")\";");
            WriteToJassEngineInit("    return s.str( );");
            WriteToJassEngineInit("}");




            for (int i = 0; i < JassNativeFunctions.Count; i++)
            {
                string ToAdd = "typedef " + JassNativeFunctions[i].FuncType +
                    " ( __cdecl * " + JassNativeFunctions[i].FuncName + "_FUNC) (";
                bool IsFirst = false;
                foreach (argstruct FuncArg in JassNativeFunctions[i].FuncArgs)
                {
                    if (!IsFirst)
                    {
                        IsFirst = true;
                        ToAdd += FuncArg.argtype + " ";
                        ToAdd += FuncArg.argname;
                    }
                    else
                    {
                        ToAdd += ", " + FuncArg.argtype + " ";
                        ToAdd += FuncArg.argname;
                    }
                }
                ToAdd += ");";
                WriteToJassNativesList(ToAdd);
            }

            for (int i = 0; i < JassNativeFunctions.Count; i++)
            {
                WriteToJassNativesList("extern " + JassNativeFunctions[i].FuncName +
                    "_FUNC " + JassNativeFunctions[i].FuncName + "_org;");

                WriteToJassNativesListInitialzier(JassNativeFunctions[i].FuncName +
                    "_FUNC " + JassNativeFunctions[i].FuncName + "_org = nullptr;");
            }


            WriteToJassNativesList("void Initializer( );");
            WriteToJassNativesList("}");

            WriteToJassNativesListInitialzier("void Initializer( )");
            WriteToJassNativesListInitialzier("{");
            WriteToJassNativesListInitialzier("   LookupNative_org = (LookupNative) (GameDll + 0x44EA00);");
            for (int i = 0; i < JassNativeFunctions.Count; i++)
            {
                WriteToJassNativesListInitialzier("   " + JassNativeFunctions[i].FuncName + "_org = (" + JassNativeFunctions[i].FuncName +
                    "_FUNC " + ") LookupNative_org(\"" + JassNativeFunctions[i].FuncName + "\",0);");
            }
            WriteToJassNativesListInitialzier("}");
            WriteToJassNativesListInitialzier("}");


            WriteToJassEngineInit("}");
            WriteToJassEngineInit("BOOL APIENTRY DllMain( HINSTANCE hDLL , DWORD reason , LPVOID reserved )");
            WriteToJassEngineInit("{");
            WriteToJassEngineInit("	switch ( reason )");
            WriteToJassEngineInit("	{");
            WriteToJassEngineInit("		case DLL_PROCESS_ATTACH:");
            WriteToJassEngineInit("			MH_Initialize( );");
            WriteToJassEngineInit("			JASSCPP::Initializer( );");
            WriteToJassEngineInit("		break;");
            WriteToJassEngineInit("		case DLL_PROCESS_DETACH:");
            WriteToJassEngineInit("			MH_Uninitialize( );");
            WriteToJassEngineInit("		break;");
            WriteToJassEngineInit("	}");
            WriteToJassEngineInit("	return TRUE;");
            WriteToJassEngineInit("}");

        }
    }
}
