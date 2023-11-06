#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   int item;
   int codigo;
   char produto[250];

  printf("Seja bem-vindo a Silas moda!\n");
  printf("A melhor da região\n\n");
   printf("1\t|\tCAMISETA\n");
   printf("2\t|\tCALÇA\n");
   printf("3\t|\tSAPATO\n");
   printf("Informe o código com base no item desejado: \n");
   scanf("%d", &item);

 system("cls || clear");  

   switch (item){
       case 1:
          printf("1\t|\tCamiseta tradicional\tR$45\n");
          printf("2\t|\tCamiseta oversized\tR$100\n");
          printf("3\t|\tCamiseta polo\tR$60\n");
         printf("Informe o código com base no item desejado: \n");
         scanf("%d", &codigo);

    switch (codigo){
      case 1:
      strcpy(produto, "Camiseta tradicional R$45\n");
      break;
      case 2:
      strcpy(produto, "Camiseta oversized R$100\n");
      break;
      case 3:
      strcpy(produto, "Camiseta polo R$60\n");
      break;
    }
       break;
       case 2:
        printf("1\t|\tCalÇa jeans\t\tR$55\n");
        printf("2\t|\tCalÇa jogger\tR$80\n");
        printf("3\t|\tCalÇa skinny\tR$60\n");
        printf("Informe o código com base no item desejado: \n");
        scanf("%d", &codigo);

         switch (codigo){
           case 1:
           strcpy(produto, "CalÇa jeans R$55\n");
           break;
           case 2:
           strcpy(produto, "CalÇa jogger R$80\n");
           break;
           case 3:
           strcpy(produto, "CalÇa skinny R$60\n");
           break;
         }
       break;
       case 3:
         printf("1\t|\tTênis\tR$150\n");
           printf("2\t|\tBotas\tR$100\n");
           printf("3\t|\tSapatênis\tR$60\n");
          printf("Informe o código com base no item desejado: \n");
          scanf("%d", &codigo);
         switch (codigo){
            case 1:
            strcpy(produto, "Tênis R$150\n");
            break;
            case 2:
            strcpy(produto, "Botas R$100\n");
            break;
            case 3:
            strcpy(produto, "Sapatênis R$60\n");
            break;
          }
       break;
   }

system("cls || clear");
  
   printf("%s", produto);
   printf("Obrigado pela preferência!");

    return 0;
}
