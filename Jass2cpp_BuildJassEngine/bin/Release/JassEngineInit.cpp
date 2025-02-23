#pragma comment(lib, "libMinHook.x86.lib")
#include <Windows.h>
#include <sstream>
#include <string>
#include "JassNativesList.h"
#include "MinHook.h"
namespace JASSCPP {
int GameDll = (int) GetModuleHandleA( "Game.dll");
FILE * logfile;
char funcname1[] = "NULLNAME";
char funcname2[] = "NULLNAME";
void EngineJassLog( const char * format , ... )
{
	/*char buffer[ 256 ]; va_list args; va_start( args , format );
	vsprintf_s( buffer , 256 , format , args ); va_end( args );
	int lentowrite = strlen( buffer );
	fwrite( &buffer , lentowrite , 1 , logfile ); fflush( logfile );*/
	va_list args;
 va_start( args , format );
 vfprintf_s( logfile , format , args );
 va_end( args );
 /*fflush( logfile );*/
}
std::string GetStrID( int id )
{
    char buff[ 7 ];
    char buff2[ 4 ];
    CopyMemory( buff2 , &id , 4 );
    buff[ 0 ] = '\'';
    buff[ 1 ] = buff2[ 3 ];
    buff[ 2 ] = buff2[ 2 ];
	   buff[ 3 ] = buff2[ 1 ];
    buff[ 4 ] = buff2[ 0 ];
    buff[ 5 ] = '\'';
    buff[ 6 ] = '\0';
    bool needreturnid = true;
    for ( int i = 1; i < 5; i++ )
    {
        if ( !isalnum( buff[ i ] ) )
        {
            needreturnid = false;
            break;
        }
    }
    if ( needreturnid )
      return std::string( buff );
    return std::to_string( id );
}
const char * BoolToStr( BOOL boolean )
{
    return boolean ? "true" : "false";
}
char * ReadJassStringNormal( int JASSSTRING )
{
    if ( JASSSTRING == NULL || JASSSTRING >= INT_MAX ) { return NULL; }
    int offset1 = *( int* ) ( ( int ) JASSSTRING + 8 );
    if ( offset1 == NULL || offset1 >= INT_MAX ) { return NULL; }
    int offset2 = *( int * ) ( ( *( int* ) ( ( int ) JASSSTRING + 8 ) ) + 0x1C );
    if ( offset2 == NULL || offset2 >= INT_MAX ) { return NULL; }
    return *( char ** ) ( ( *( int* ) ( ( int ) JASSSTRING + 8 ) ) + 0x1C );
}
char * ReadJassSID(int JSID)
{
    int Convert = GameDll + 0x459640; int GetCurrentJassEnvironment = GameDll + 0x44B2E0;
    char * cRet = NULL;
    __asm
    {
        push JSID;
        mov ecx, 1;
        call GetCurrentJassEnvironment;
        mov ecx, eax;
        call Convert;
        mov ecx,dword ptr ds:[eax+0x08];
        mov eax,dword ptr ds:[ecx+0x1C];
        mov cRet, eax;
    }
    return cRet;
}
std::string GetUnitHID( int unitid )
{
   if ( unitid == 0 ) return "null";
       std::stringstream s; s << unitid; s << "(" << GetStrID( GetUnitTypeId(unitid) ) << ")";
    return s.str( );
}
std::string GetItemHID( int itemid )
{
   if ( itemid == 0 ) return "null";
        std::stringstream s; s << itemid; s << "(" << GetStrID( GetItemTypeId( itemid ) ) << ")";
    return s.str( );
}
}
BOOL APIENTRY DllMain( HINSTANCE hDLL , DWORD reason , LPVOID reserved )
{
	switch ( reason )
	{
		case DLL_PROCESS_ATTACH:
			MH_Initialize( );
			JASSCPP::Initializer( );
		break;
		case DLL_PROCESS_DETACH:
			MH_Uninitialize( );
		break;
	}
	return TRUE;
}
