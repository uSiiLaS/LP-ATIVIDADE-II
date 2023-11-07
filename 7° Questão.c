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
   int codigo;
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
       printf("Selecione a dificuldade do jogo:\n1-Fácil\n2-Normal\n3-Difícil\n4-Experiente\n");
         scanf("%d", &codigo);
         system("cls || clear");
         printf("Iniciando o jogo...");
       break;
       case 2:
       printf("°Carregar jogo 1'\n°Carregar jogo 2'\n°Carregar jogo 3'\n°Carregar jogo 4'\n");
         scanf("%d", &codigo);
         system("cls || clear");
         printf("Iniciando o jogo...");
       break;
       case 3:
printf("°Controle\n°Vídeo\n°Áudio\n°Idioma\n°Fórum\n°Créditos");
       break;
   }

    return 0;
}
