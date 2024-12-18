#include <stdio.h>

int main()
{
    int vetor[3];
    int temp;

    printf("Digite 3 números:\n ");

    for (int i = 0; i <= 2; i++)
    {
        printf("Digite o %d número: ", (i + 1));
        scanf("%d", &vetor[i]);
    }
    temp = vetor[0];

    for (int i = 0; i <= 2; i++)
    {
        if (temp < vetor[i])
            temp = vetor[i];
    }

    printf("O maior número é: %d \n", temp);
    return 0;
}