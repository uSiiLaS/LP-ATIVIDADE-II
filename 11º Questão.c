#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

   setlocale(LC_ALL, "portuguese");

   char codigo[250];
   char codigoSalvo[250];
   int resultado;

fflush(stdin);

printf("Informe o código desejado: \n");
gets(codigoSalvo);

system("cls || clear");

  printf("Código de acesso do edifício: \n");
  gets(codigo);

  resultado = strcmp(codigo, codigoSalvo);

  while(resultado!=0){
    printf("Código de acesso do edifício: \n");
gets(codigo);
    
    resultado = strcmp(codigo, codigoSalvo);
  }

system("cls || clear");

printf("Bem-Vindo");

    return 0;
}
