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
   
int idade;
char resultado[250];

printf("Olá\n");
printf("Seja bem-vindo(a)\n");
printf("Informe a sua idade: ");
scanf("%d", &idade);
  
  if(idade >= 18){
      strcpy(resultado, "Acesso permitido!");
  } else {
      strcpy(resultado, "Acesso negado!");
  }
   
   system("cls || clear");
   
   printf("%s", resultado);
   
    return 0;
}
