#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int valor;
int i;
int contador=0;
  
  printf("Digite um valor: ");
  scanf("%d", &valor);

  for(i=1; i<=valor; i++){
     if(valor%i==0){
       contador++;
     }
  }

  switch(contador){
    case 2:
    printf("Número é primo");
    break;
    default:
    printf("Número não é primo");
  }
  
return 0;
}