#include <stdio.h>

 int main()
 {
 /*variaveis*/
 int x, soma;

 soma=0;
 /*inicio do código*/
 printf("Digite o primeiro número da soma:");
 scanf ("%d", &x);

 while (x !=0) {

 soma = soma +x;
 printf("O valor da soma dos números é:%d\n", soma);
 printf("Digite o primeiro número da soma:");
 scanf ("%d", &x);

 }
printf("Você digitou 0. O valor da soma dos números é:%d\n", soma);

 /*fim do códio*/
 return 0;



 }
