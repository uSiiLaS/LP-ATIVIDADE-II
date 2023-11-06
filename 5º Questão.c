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
   
   int idioma;
   char saudacao[250];
   
   printf("1\t|\tINGLÊS\n");
   printf("2\t|\tESPANHOL\n");
   printf("3\t|\tFRANCÊS\n");
   printf("Informe o código com base no seu idioma: \n");
   scanf("%d", &idioma);
   
 system("cls || clear");  
   
   switch (idioma){
       case 1:
       strcpy(saudacao, "Welcome!");
       break;
       case 2:
       strcpy(saudacao, "Bienvenida!");
       break;
       case 3:
       strcpy(saudacao, "Accueillir!");
       break;
      default:
      printf("Código inválido...");
   }
   
   printf("%s", saudacao);
   
    return 0;
}
