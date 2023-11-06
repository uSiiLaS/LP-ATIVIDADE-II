#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

   setlocale(LC_ALL, "portuguese");

float valor;
float resultado;
  int opcao;

do{

printf("Informe um valor que deseja converter: \n");
scanf("%f", &valor);

printf("\n\nUNIDADES DE MEDIDA\n");
printf("\tDE   -----   PARA\n");
printf("1\tMETRO ----- QUILÔMETRO\n");
printf("2\tSEGUNDO ----- HORA\n");
printf("3\tFAHRENHEIT ----- CELSIUS\n");
printf("4\tQUILOGRAMA ----- GRAMA\n");
printf("Escolha a conversão desejada: ");
scanf("%d", &opcao);

  switch (opcao){
    case 1:
      resultado = valor / 1000;
    break;
    case 2:
      resultado = valor / 3600;
    break;
    case 3:
      resultado = ( valor - 32) * 5/9;
    break;
    case 4:
      resultado = valor * 1000;
    break;
    default: printf("Opção inválida!");
  } 

}while(valor != 0); 

printf("O resultado da conversão é %.2f", resultado);
  
    return 0;
}
