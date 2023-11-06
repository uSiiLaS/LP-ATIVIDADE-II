/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   
   char clima[250];
   int temperatura;
   
   printf("Informe a temperatura: ");
   scanf("%d", &temperatura);
   
   if (temperatura > 25){
   strcpy(clima, "Ensolarado");
   } else if (temperatura < 15){
   strcpy(clima, "Chuvoso");
   } else if (temperatura >= 15 && temperatura <= 25){
   strcpy(clima, "Nublado");
   }
  
  system("cls || clear");
   
   printf("Clima %s", clima);
   
    return 0;
}
