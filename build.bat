@echo off

rem  Inno Setup
rem  Copyright (C) 1997-2024 Jordan Russell
rem  Portions by Martijn Laan
rem  For conditions of distribution and use, see LICENSE.TXT.
rem
rem  Batch file to prepare isscint.dll
rem
rem  This batch files does the following things:
rem  -Compile Scintilla.dll
rem  -Copy it to issrc Files
rem  -Synch it to issrc Projects\Bin

setlocal

if exist buildsettings.bat goto buildsettingsfound
:buildsettingserror
echo buildsettings.bat is missing or incomplete. It needs to be created
echo with the following line, adjusted for your system:
echo.
echo   set ISSRCROOT=C:\Issrc
goto failed2

:buildsettingsfound
set ISSRCROOT=
call .\buildsettings.bat
if "%ISSRCROOT%"=="" goto buildsettingserror


call .\compile.bat %1
if errorlevel 1 goto failed
echo Compiling isscint.dll done

echo - Copying isscint.dll to issrc\Files
copy bin\Scintilla.dll "%ISSRCROOT%\Files\isscint.dll"
if errorlevel 1 goto failed
call "%ISSRCROOT%\Projects\Bin\synch-isfiles.bat" nopause
if errorlevel 1 goto failed

echo All done!
pause
exit /b 0

:failed
echo *** FAILED ***
pause
:failed2
exit /b 1