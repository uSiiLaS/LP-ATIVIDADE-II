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
   
float nota;
char situacao[250];
   
   printf("Informe a sua nota: ");
   scanf("%f", &nota);
   
   if(nota >= 9){
       strcpy(situacao, "Excelente!");
   }else if (nota >= 7){
       strcpy(situacao, "Bom!");
   }else if (nota >= 5 ){
       strcpy(situacao, "Razoável!");
   }else if (nota < 5){
       strcpy(situacao, "Insuficiente!");
   }
   
   system("cls || clear");
   
  printf("Nota: %.2f - %s", nota, situacao);
  
   
    return 0;
}
