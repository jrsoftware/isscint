@echo off

rem  Inno Setup
rem  Copyright (C) 1997-2025 Jordan Russell
rem  Portions by Martijn Laan
rem  For conditions of distribution and use, see LICENSE.TXT.
rem
rem  Batch file to compile Scintilla.dll

setlocal

if "%1"=="x86" goto archfound
if "%1"=="x64" goto archfound
if "%1"=="arm64" goto archfound
echo Architecture parameter is missing or invalid. Must be "x86" or "x64" or "arm64".
goto failed2
:archfound

if exist compilesettings.bat goto compilesettingsfound
:compilesettingserror
echo compilesettings.bat is missing or incomplete. It needs to be created
echo with the following line, adjusted for your system:
echo.
echo   set VSBUILDROOT=c:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build
goto failed2

:compilesettingsfound
set VSBUILDROOT=
call .\compilesettings.bat
if "%VSBUILDROOT%"=="" goto compilesettingserror

rem -------------------------------------------------------------------------

set vsarch=%1
if "%1"=="x86" set vsarch=amd64_x86
if "%1"=="arm64" set vsarch=amd64_arm64

set __VSCMD_ARG_NO_LOGO=1
set VSCMD_SKIP_SENDTELEMETRY=1

echo - Calling vcvarsall.bat %vsarch%
call "%VSBUILDROOT%\vcvarsall.bat" %vsarch%
if errorlevel 1 goto exit
echo.

echo - Compiling Scintilla.dll
cd win32
if errorlevel 1 goto exit
if "%2"=="noclean" goto noclean
nmake -s -f scintilla.mak clean
if errorlevel 1 goto failed
:noclean
nmake -s -f scintilla.mak
if errorlevel 1 goto failed

echo Success!
cd ..
goto exit

:failed
echo *** FAILED ***
cd ..
:failed2
exit /b 1

:exit
