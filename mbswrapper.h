﻿// mbswrapper.h
// Copyright (C) 2011 Suguru Kawamoto
// マルチバイト文字ワイド文字APIラッパー

#ifndef __MBSWRAPPER_H__
#define __MBSWRAPPER_H__

#include <stdio.h>
#include <windows.h>
#include <shlobj.h>

#ifndef DO_NOT_REPLACE

#undef WinMain
#define WinMain WinMainM
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow);
#undef CreateFile
#define CreateFile CreateFileM
HANDLE CreateFileM(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
#undef MessageBox
#define MessageBox MessageBoxM
int MessageBoxM(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
#undef GetWindowLong
#define GetWindowLong GetWindowLongM
LONG GetWindowLongM(HWND hWnd, int nIndex);
#undef SetWindowLong
#define SetWindowLong SetWindowLongM
LONG SetWindowLongM(HWND hWnd, int nIndex, LONG dwNewLong);
#undef GetWindowLongPtr
#define GetWindowLongPtr GetWindowLongPtrM
LONG_PTR GetWindowLongPtrM(HWND hWnd, int nIndex);
#undef SetWindowLongPtr
#define SetWindowLongPtr SetWindowLongPtrM
LONG_PTR SetWindowLongPtrM(HWND hWnd, int nIndex, LONG_PTR dwNewLong);
#undef DefWindowProc
#define DefWindowProc DefWindowProcM
LRESULT DefWindowProcM(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
#undef CallWindowProc
#define CallWindowProc CallWindowProcM
LRESULT CallWindowProcM(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
#undef SendMessage
#define SendMessage SendMessageM
LRESULT SendMessageM(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
#undef DefDlgProc
#define DefDlgProc DefDlgProcM
LRESULT DefDlgProcM(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
#undef SendDlgItemMessage
#define SendDlgItemMessage SendDlgItemMessageM
LRESULT SendDlgItemMessageM(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam);
#undef DragQueryFile
#define DragQueryFile DragQueryFileM
UINT DragQueryFileM(HDROP hDrop, UINT iFile, LPSTR lpszFile, UINT cch);
#undef RegOpenKeyEx
#define RegOpenKeyEx RegOpenKeyExM
LSTATUS RegOpenKeyExM(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);
#undef RegCreateKeyEx
#define RegCreateKeyEx RegCreateKeyExM
LSTATUS RegCreateKeyExM(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
#undef RegDeleteValue
#define RegDeleteValue RegDeleteValueM
LSTATUS RegDeleteValueM(HKEY hKey, LPCSTR lpValueName);
#undef RegQueryValueEx
#define RegQueryValueEx RegQueryValueExM
LSTATUS RegQueryValueExM(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
#undef RegSetValueEx
#define RegSetValueEx RegSetValueExM
LSTATUS RegSetValueExM(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, CONST BYTE* lpData, DWORD cbData);
#undef SHFileOperation
#define SHFileOperation SHFileOperationM
int SHFileOperationM(LPSHFILEOPSTRUCTA lpFileOp);
#undef AppendMenu
#define AppendMenu AppendMenuM
BOOL AppendMenuM(HMENU hMenu, UINT uFlags, UINT_PTR uIDNewItem, LPCSTR lpNewItem);
#undef GetMenuItemInfo
#define GetMenuItemInfo GetMenuItemInfoM
BOOL GetMenuItemInfoM(HMENU hmenu, UINT item, BOOL fByPosition, LPMENUITEMINFOA lpmii);
#undef CreateFontIndirect
#define CreateFontIndirect CreateFontIndirectM
HFONT CreateFontIndirectM(CONST LOGFONTA *lplf);
#undef ChooseFont
#define ChooseFont ChooseFontM
BOOL ChooseFontM(LPCHOOSEFONTA v0);
#undef CreateDialogParam
#define CreateDialogParam CreateDialogParamM
HWND CreateDialogParamM(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
#undef sndPlaySound
#define sndPlaySound sndPlaySoundM
BOOL sndPlaySoundM(LPCSTR pszSound, UINT fuSound);
#undef MoveFile
#define MoveFile MoveFileM
BOOL MoveFileM(LPCSTR lpExistingFileName, LPCSTR lpNewFileName);
#undef CreateDirectory
#define CreateDirectory CreateDirectoryM
BOOL CreateDirectoryM(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
#undef mkdir
#define mkdir _mkdirM
int mkdirM(const char * _Path);
#undef _mkdir
#define _mkdir _mkdirM
int _mkdirM(const char * _Path);
#undef _mbslen
#define _mbslen _mbslenM
size_t _mbslenM(const unsigned char * _Str);
#undef _mbschr
#define _mbschr _mbschrM
unsigned char * _mbschrM(const unsigned char * _Str, unsigned int _Ch);
#undef _mbsrchr
#define _mbsrchr _mbsrchrM
unsigned char * _mbsrchrM(const unsigned char * _Str, unsigned int _Ch);
#undef _mbsstr
#define _mbsstr _mbsstrM
unsigned char * _mbsstrM(const unsigned char * _Str, const unsigned char * _Substr);
#undef _mbscmp
#define _mbscmp _mbscmpM
int _mbscmpM(const unsigned char * _Str1, const unsigned char * _Str2);
#undef _mbsicmp
#define _mbsicmp _mbsicmpM
int _mbsicmpM(const unsigned char * _Str1, const unsigned char * _Str2);
#undef _mbsncmp
#define _mbsncmp _mbsncmpM
int _mbsncmpM(const unsigned char * _Str1, const unsigned char * _Str2, size_t _MaxCount);
#undef _mbslwr
#define _mbslwr _mbslwrM
unsigned char * _mbslwrM(unsigned char * _String);
#undef _mbsupr
#define _mbsupr _mbsuprM
unsigned char * _mbsuprM(unsigned char * _String);
#undef _mbsninc
#define _mbsninc _mbsnincM
unsigned char * _mbsnincM(const unsigned char * _Str, size_t _Count);
#undef fopen
#define fopen fopenM
FILE * fopenM(const char * _Filename, const char * _Mode);

#endif

#ifdef FORCE_SJIS_ON_ACTIVE_CODE_PAGE
#undef CP_ACP
#define CP_ACP 932
#endif

#ifdef EMULATE_UTF8_WCHAR_CONVERSION
#define MultiByteToWideChar MultiByteToWideCharAlternative
#define WideCharToMultiByte WideCharToMultiByteAlternative
#endif

int MtoW(LPWSTR pDst, int size, LPCSTR pSrc, int count);
int WtoM(LPSTR pDst, int size, LPCWSTR pSrc, int count);
int AtoW(LPWSTR pDst, int size, LPCSTR pSrc, int count);
int WtoA(LPSTR pDst, int size, LPCWSTR pSrc, int count);
int TerminateStringM(LPSTR lpString, int size);
int TerminateStringW(LPWSTR lpString, int size);
int TerminateStringA(LPSTR lpString, int size);
size_t GetMultiStringLengthM(LPCSTR lpString);
size_t GetMultiStringLengthW(LPCWSTR lpString);
size_t GetMultiStringLengthA(LPCSTR lpString);
int MtoWMultiString(LPWSTR pDst, int size, LPCSTR pSrc);
int WtoMMultiString(LPSTR pDst, int size, LPCWSTR pSrc);
int AtoWMultiString(LPWSTR pDst, int size, LPCSTR pSrc);
int WtoAMultiString(LPSTR pDst, int size, LPCWSTR pSrc);
char* AllocateStringM(int size);
wchar_t* AllocateStringW(int size);
char* AllocateStringA(int size);
wchar_t* DuplicateMtoW(LPCSTR lpString, int c);
wchar_t* DuplicateMtoWBuffer(LPCSTR lpString, int c, int size);
wchar_t* DuplicateMtoWMultiString(LPCSTR lpString);
wchar_t* DuplicateMtoWMultiStringBuffer(LPCSTR lpString, int size);
char* DuplicateWtoM(LPCWSTR lpString, int c);
wchar_t* DuplicateAtoW(LPCSTR lpString, int c);
char* DuplicateWtoA(LPCWSTR lpString, int c);
DWORD GetNextCharM(LPCSTR lpString, LPCSTR pLimit, LPCSTR* ppNext);
int PutNextCharM(LPSTR lpString, LPSTR pLimit, LPSTR* ppNext, DWORD Code);
DWORD GetNextCharW(LPCWSTR lpString, LPCWSTR pLimit, LPCWSTR* ppNext);
int PutNextCharW(LPWSTR lpString, LPWSTR pLimit, LPWSTR* ppNext, DWORD Code);
int GetCodeCountM(LPCSTR lpString, int CharCount);
int GetCodeCountW(LPCWSTR lpString, int CharCount);
BOOL FixStringM(LPSTR pDst, LPCSTR pSrc);
void FreeDuplicatedString(void* p);
int MultiByteToWideCharAlternative(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
int WideCharToMultiByteAlternative(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);

int WINAPI WinMainM(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

#endif

