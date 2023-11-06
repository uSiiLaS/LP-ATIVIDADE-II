/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   
 float preco;
 float desconto;
 float valorPago;
 int semana;
 
 printf("Informe o preço do produto: \n");
 scanf("%f", &preco);
 
 printf("Digite (1) para FIM DE SEMANA e (2) para SEMANA NORMAL: \n");
 scanf("%d", &semana);
   
   switch (semana){
   case 1:
   if(preco > 100){
       desconto = 0.15;
   }
   break;       
   case 2: 
   if(preco > 100){
       desconto = 0.10;
   }
   break;
   }
   
  valorPago = preco - (preco * desconto);
    
   system("cls || clear");
   
   printf("Valor total a ser pago: %.2f\n", valorPago);
   printf("Valor do desconto: %.2f\n", preco * desconto);
   
    return 0;
}
