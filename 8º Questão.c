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

printf("Informe um valor: ");
scanf("%d", &valor);

system("cls || clear");

for(i=valor; i>=0; i--){
printf("%d\n", i);
sleep(2);
}

return 0;
}