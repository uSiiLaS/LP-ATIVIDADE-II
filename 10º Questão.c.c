#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int i;
float valor;
float soma=0;
float subtracao=0;
float resultado;
char operacao;

for(i=1; i<=2;i++){
printf("Informe o %dº valor: ", i);
scanf("%f", &valor);
  soma += valor;

  subtracao -= valor;
}

fflush(stdin);

printf("Informe a operação desejada: ");
scanf("%c", &operacao);

switch(operacao){
case '+':
resultado = soma;
break;
case '-':
resultado = subtracao;
break;
}

printf("Resultado da operação: %f", resultado);

  return 0;
}