
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
   char produto[250];
   
   printf("1\t|\tCAMISETA\n");
   printf("2\t|\tCALÇA\n");
   printf("3\t|\tSAPATO\n");
   printf("Informe o código com base no item desejado: \n");
   scanf("%d", &item);
   
 system("cls || clear");  
   
   switch (item){
       case 1:
       strcpy(produto, "Camiseta\nR$35");
       break;
       case 2:
       strcpy(produto, "Calça\nR$40");
       break;
       case 3:
       strcpy(produto, "Sapato\nR$100");
       break;
   }
   
   printf("%s", produto);
   
    return 0;
}