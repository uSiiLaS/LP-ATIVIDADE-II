#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

   setlocale(LC_ALL, "portuguese");

  float soma=0;
  float nota;
  float media=0;
  int i;
  int quantidade;

printf("Informe a quantidade de notas que deseja inserir: ");
  scanf("%d", &quantidade);

system("cls || clear");

  for(i=1; i<=quantidade; i++){
printf("Insira a %dº nota: ", i);
    scanf("%f", &nota);
 soma+=nota;
  }

  media = soma / quantidade;

  system("cls || clear");

  printf("Média das notas: %.2f", media);

    return 0;
}
