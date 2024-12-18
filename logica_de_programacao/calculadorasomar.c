#include <stdio.h>

int main()
{

int num1, num2, total;
printf("======Calculadora de Somar dois algarismos======\n");
printf("Digite o primeiro valor: ");
scanf("%d", &num1);
printf("Digite o segundo valor: ");
scanf("%d", &num2);
total=num1+num2;

printf("O valor da soma dos algarismo é de: %d\n", total);

return 0;

}