#include <stdio.h>

int main()
{

    int vetor[10] = {2, 5, 6, 8, 9, 1, 4, 3, 7, 0};

    int temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - 1 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", vetor[i]);
    }
    getchar();
    return 0;
}