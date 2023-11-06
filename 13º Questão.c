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
int maior=0;
int menor=999;

for(i=1; i<=2; i++){
    printf("Informe o %dº valor: ", i);
    scanf("%d", &valor);
    
    maior = maior > valor ? maior : valor;
    menor = menor < valor ? menor : valor;

}

 printf("Maior número: %d\n", maior);
 printf("Menor número: %d\n", menor);
 
    return 0;
}