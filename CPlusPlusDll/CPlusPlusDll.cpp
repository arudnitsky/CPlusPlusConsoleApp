#include "stdafx.h"
#include "CPlusPlusDll.h"


// This is an example of an exported variable
CPLUSPLUSDLL_API int nCPlusPlusDll=0;

// This is an example of an exported function.
CPLUSPLUSDLL_API int fnCPlusPlusDll(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see CPlusPlusDll.h for the class definition
ClassInCPlusPlusDll::ClassInCPlusPlusDll()
{
	return;
}

void ClassInCPlusPlusDll::CallDebugBreak()
{
   __debugbreak();
}
