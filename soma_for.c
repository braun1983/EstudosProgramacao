#include <stdio.h>

int main()
{

    /* variaveis */
    int soma, i, n, x;

    soma=0;

    /*entrada de dados */

    printf("Quantos números serão digitados?");
    scanf("%d", &n);

    /*estrutura de repetição*/

    for (i=1; i<=n; i++)
    {
        printf("Digite um número:");
        scanf ("%d", &x);
        soma = soma+x;

    }
    /*saída de dados */
    printf("O resultado da soma é: %d", soma);
    /*fim do programa */
    return 0;
}
