#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   
   int opcao;
   char resultado[250];
   
   printf("\tMENU\t\n");
   printf("1\t|\tNOVO JOGO\n");
   printf("2\t|\tCARREGAR JOGO\n");
   printf("3\t|\tCONFIGURAÇÕES\n");
   printf("Informe o código com base no item desejado: \n");
   scanf("%d", &opcao);
   
 system("cls || clear");  
   
   switch (opcao){
       case 1:
       strcpy(resultado, "Selecione a dificuldade do jogo:\n1-Fácil\n2-Normal\n3-Difícil\n4-Experiente");
       break;
       case 2:
       strcpy(resultado, "°Carregar jogo 1'\n°Carregar jogo 2'\n°Carregar jogo 3'\n°Carregar jogo 4'\n");
       break;
       case 3:
       strcpy(resultado, "°Controle\n°Vídeo\n°Áudio\n°Idioma\n°Fórum\n°Créditos");
       break;
   }
   
   printf("%s", resultado);
   
    return 0;
}