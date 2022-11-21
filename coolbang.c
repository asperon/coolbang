#include <windows.h>
#include <stdio.h>
#include "coolplayer.h"
#include "coolbang.h"
#include "../lsapi/lsapi.h"

const char szAppName[] = "CoolBang"; 

void BangDelete(HWND caller ,char* args);
void BangRepeat(HWND caller ,char* args);
void BangShuffle(HWND caller ,char* args);
void BangPlay(HWND caller ,char* args);
void BangStop(HWND caller ,char* args);
void BangPause(HWND caller ,char* args);
void BangLoad(HWND caller ,char* args);
void BangNext(HWND caller ,char* args);
void BangPrev(HWND caller ,char* args);
void BangVolumeUp(HWND caller ,char* args);
void BangVolumeDown(HWND caller ,char* args);
void BangForward(HWND caller ,char* args);
void BangBackward(HWND caller ,char* args);
void BangAbout(HWND caller ,char* args);
void BangPlaylist(HWND caller ,char* args);
void BangDrawSkinLines(HWND caller ,char* args);
void BangLoadSkin(HWND caller ,char* args);

void RegisterBangCommands(void);
void FindCoolPath(void);
char szCoolPath[256];

int initModule(HWND ParentWnd, HINSTANCE dllInst, wharfDataType* wd)
{
	return initModuleEx (ParentWnd, dllInst, wd->lsPath);
}

int initModuleEx(HWND ParentWnd, HINSTANCE dllInst, LPCSTR szPath)
{
	RegisterBangCommands();
	FindCoolPath();
	return 0;
}

void FindCoolPath(void)
{
GetRCString("CoolPlayerPath", szCoolPath, "c:\\program\\coolplayer\\coolplayer.exe", 256);
}

void RegisterBangCommands(void)
{
	AddBangCommand("!COOL_DELETE", BangDelete);
	AddBangCommand("!COOL_REPEAT", BangRepeat);
	AddBangCommand("!COOL_SHUFFLE", BangShuffle);
	AddBangCommand("!COOL_PLAY", BangPlay);
  	AddBangCommand("!COOL_PAUSE", BangPause);
	AddBangCommand("!COOL_STOP", BangStop);
	AddBangCommand("!COOL_LOAD", BangLoad);
	AddBangCommand("!COOL_NEXT", BangNext);
	AddBangCommand("!COOL_PREV", BangPrev);
	AddBangCommand("!COOL_VOLUMEUP", BangVolumeUp);
	AddBangCommand("!COOL_VOLUMEDOWN", BangVolumeDown);
	AddBangCommand("!COOL_FORWARD", BangForward);
	AddBangCommand("!COOL_BACKWARD", BangBackward);
	AddBangCommand("!COOL_ABOUT", BangAbout);
	AddBangCommand("!COOL_PLAYLIST", BangPlaylist);
	AddBangCommand("!COOL_DRAWSKINLINES", BangDrawSkinLines);
	AddBangCommand("!COOL_LOADSKIN", BangLoadSkin);
}

void BangDelete(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_DELETE,0);
}

void BangRepeat(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_REPEAT,0);
}

void BangShuffle(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_SHUFFLE,0);
}


void BangPlay(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	if (hwndCoolPlayer = FindWindow("CoolPlayer", NULL))
	{
		SendMessage(hwndCoolPlayer, WM_COMMAND,ID_PLAY,0);
	}
	else
	{
		ShellExecute(caller, "open", szCoolPath ,NULL, NULL, SW_MINIMIZE);
	}
}

void BangStop(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_STOP,0);
}

void BangPause(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_PAUSE,0);
}

void BangLoad(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_LOAD,0);
}

void BangNext(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_NEXT,0);
}

void BangPrev(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_PREVIOUS,0);
}

void BangVolumeUp(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_VOLUMEUP,0);
}

void BangVolumeDown(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_VOLUMEDOWN,0);
}

void BangForward(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_SEEKFORWARD,0);
}

void BangBackward(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_SEEKBACKWARD,0);
}

void BangPlaylist(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_PLAYLIST,0);
}

void BangAbout(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_ABOUT,0);
}


void BangLoadSkin(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_LOADSKIN,0);
}

void BangDrawSkinLines(HWND caller ,char* args)
{
	HWND hwndCoolPlayer;
	hwndCoolPlayer = FindWindow("CoolPlayer", NULL);
	SendMessage(hwndCoolPlayer, WM_COMMAND,ID_DRAWSKINLINES,0);
}

void quitModule(HINSTANCE dllInst)
{
	RemoveBangCommand("!COOL_DELETE");
	RemoveBangCommand("!COOL_REPEAT");
	RemoveBangCommand("!COOL_SHUFFLE");
	RemoveBangCommand("!COOL_PLAY");
  	RemoveBangCommand("!COOL_PAUSE");
	RemoveBangCommand("!COOL_STOP");
	RemoveBangCommand("!COOL_LOAD");
	RemoveBangCommand("!COOL_NEXT");
	RemoveBangCommand("!COOL_PREV");
	RemoveBangCommand("!COOL_VOLUMEUP");
	RemoveBangCommand("!COOL_VOLUMEDOWN");
	RemoveBangCommand("!COOL_FORWARD");
	RemoveBangCommand("!COOL_BACKWARD");
	RemoveBangCommand("!COOL_ABOUT");
	RemoveBangCommand("!COOL_PLAYLIST");
	RemoveBangCommand("!COOL_DRAWSKINLINES");
	RemoveBangCommand("!COOL_LOADSKIN");
}