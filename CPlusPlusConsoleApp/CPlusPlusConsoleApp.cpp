#include "stdafx.h"
#include "../CPlusPlusStaticLibrary/CPlusPlusStaticLibrary.h"
#include "../CPlusPlusDll/CPlusPlusDll.h"


void CallStaticLibrary()
{
   CallDebugBreak();
}

void CallDll()
{
   ClassInCPlusPlusDll exportedClass;

   exportedClass.CallDebugBreak();
}

int _tmain(int argc, _TCHAR* argv[])
{
   printf( "Version 9\n" );
   printf( "Hello World!" );

   CallStaticLibrary();

   CallDll();

	return 0;
}

