#include <stdio.h>

int checar(int numero)
{

    if (numero % 2 == 0)
    {
        printf("O número %d é par\n", numero);
    }
    else
    {
        printf("O número %d é ímpar!\n", numero);
    }
}

int main()
{
    int numero, continua;
    continua=1;
    
    while (continua==1) {

    
    printf("Digite um número: ");
    scanf("%d", &numero);

    checar(numero);
    printf("Deseja continuar?(1 - Sim, 0 - Não):");
    scanf("%d", &continua);
    }
          printf("Programa encerrado.\n");

    return 0;
}