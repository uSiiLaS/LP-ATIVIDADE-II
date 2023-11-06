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
  int par=0;
  float mediaPar;
  int somaPar=0;
  int impar=0;
  float mediaImpar;
  int somaImpar=0;

  do {

    printf("Informe um valor: \n");
    scanf("%d", &valor);

    if(valor > 0){
      if(valor % 2 == 0){
      par++;
      somaPar+=valor;
    } else {
      impar++;
     somaImpar+=valor;
    }
  }
      }while(valor > 0);

  mediaPar = (float) somaPar / par;
  mediaImpar = (float) somaImpar / impar;

printf("Total de PARES: %d\nTotal de IMPARES: %d\n", par, impar);
printf("Média de PARES: %.2f\nMédia de IMPARES: %.2f", mediaPar, mediaImpar);

    return 0;
}
