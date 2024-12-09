#include <stdio.h>
#include <malloc.h>

int main()
{
    int *y = (int *)malloc(sizeof(int)); /* criei um ponteiro do tipo inteiro e chamar o 
    malloc que reserve uma quantidade de memória (no caso do tamanho de um inteiro)*/
    *y = 20;
    int z = sizeof(int); // só para guardar o tamanho de um inteiro 

    printf("*y=%i  z=%i\n", *y, z);
    return 0;
}