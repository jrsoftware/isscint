@echo off

setlocal

cd /d %~dp0

cd ..\scripts

echo - HFacer
python HFacer.py
if errorlevel 1 goto failed

echo - ScintillaAPIFacer
python ScintillaAPIFacer.py
if errorlevel 1 goto failed

echo All done!
pause
exit /b 0

:failed
echo *** FAILED ***
pause
:failed2
exit /b 1

