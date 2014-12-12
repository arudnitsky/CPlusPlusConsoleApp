// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CPLUSPLUSDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CPLUSPLUSDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CPLUSPLUSDLL_EXPORTS
#define CPLUSPLUSDLL_API __declspec(dllexport)
#else
#define CPLUSPLUSDLL_API __declspec(dllimport)
#endif

// This class is exported from the CPlusPlusDll.dll
class CPLUSPLUSDLL_API ClassInCPlusPlusDll {
public:
   ClassInCPlusPlusDll( void );
   void CallDebugBreak();
};

extern CPLUSPLUSDLL_API int nCPlusPlusDll;

CPLUSPLUSDLL_API int fnCPlusPlusDll(void);
