#include "stdafx.h"
#include "../CPlusPlusStaticLibrary/CPlusPlusStaticLibrary.h"


void CallStaticLibrary()
{
   CallDebugBreak();
}

int _tmain(int argc, _TCHAR* argv[])
{
   printf( "Version 5\n" );
   printf( "Hello World!" );

   CallStaticLibrary();

	return 0;
}

