@echo off
REM === Ustaw ścieżkę do Qt tutaj ===
SET QT_PATH=C:\Qt\6.8.0\mingw_64\bin

REM === Ścieżka do twojego pliku EXE ===
SET EXE_PATH=C:\Users\pmartys\Documents\QT Projects\Del3\build\Desktop_Qt_6_8_0_MinGW_64_bit-Release

REM === Przejdź do katalogu EXE ===
cd /d %~dp0
cd %EXE_PATH%

echo 🔄 Uruchamiam windeployqt na: Del3.exe
"%QT_PATH%\windeployqt.exe" Del3.exe

echo ✅ Gotowe! Sprawdź czy pliki się skopiowały.
pause
