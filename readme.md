*A tiny C++ program.*

:-----------------------------
:Compile_and_Link
:-----------------------------
cl /c tiny.c
link tiny.obj /FILEALIGN:16 /ALIGN:16 /ENTRY:WinMainCRTStartup /SUBSYSTEM:CONSOLE
