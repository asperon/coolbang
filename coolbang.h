#ifndef __ACTIVESHORTCUTS_H_
#define __ACTIVESHORTCUTS_H_
#ifdef NDEBUG
// /Og (global optimizations), /Os (favor small code), /Oy (no frame pointers)
#pragma optimize("gsy",on)

#if _MSC_VER >= 1000
// Only supported/needed with VC6; VC5 already does 0x200 for release builds.
// Totally undocumented! And if you set it lower than 512 bytes, the program crashes.
// Either leave at 0x200 or 0x1000
#pragma comment(linker,"/FILEALIGN:0x200")
#endif // _MSC_VER >= 1000
#endif


#include "../litestep/wharfdata.h"
/*
typedef struct {
    char szCommand[256];
	char szParameters[256];
    char szName[256];
    int x, y, state;
    HBITMAP bmpOff, bmpOn, bmpClick;
	HRGN transOnRgn, transOffRgn, transClickRgn;
    SIZE onSize, offSize, clickSize;
    HWND hwnd;
	UINT uTimer;
    } shortcutType;
*/
#ifdef __cplusplus
extern "C" {
#endif

__declspec( dllexport ) int initModule(HWND parent, HINSTANCE dll, wharfDataType* wd);
__declspec( dllexport ) int initModuleEx(HWND parent, HINSTANCE dll, LPCSTR szPath);
__declspec( dllexport ) void quitModule(HINSTANCE dllInst);

#ifdef __cplusplus
}
#endif


#endif

