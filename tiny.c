

// Make section alignment really small
//#pragma comment(linker, "/FILEALIGN:16")
//#pragma comment(linker, "/ALIGN:16")

// /FILEALIGN directive cause error, when used inseid *.c file,
//   and should be used as command-line only!

// Merge sections
//#pragma comment(linker, "/MERGE:.rdata=.data")
//#pragma comment(linker, "/MERGE:.text=.data")
//#pragma comment(linker, "/MERGE:.reloc=.data")



// Favour small code
#pragma optimize("gsy", on)


// Single entrypoint
int WinMainCRTStartup()
{
   return 0;
}


