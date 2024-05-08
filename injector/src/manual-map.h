#pragma once

#include <Windows.h>
#include <iostream>
#include <fstream>
#include <TlHelp32.h>
#include <stdio.h>
#include <string>

//Note: Exception support only x64 with build params /EHa or /EHc
bool ManualMapDLL(HANDLE hProc, BYTE* pSrcData, SIZE_T FileSize, bool ClearHeader, bool ClearNonNeededSections, bool AdjustProtections, bool SEHExceptionSupport, DWORD fdwReason);
bool ManualMapDLL(HANDLE hProcess, const std::string& dllPath);