//aprendendo sobre ponteiros
#include <stdio.h>

int main(){
    int x = 25;
    int* y =&x; // y receberá um ponteiro do tipo inteiro
    *y = 30; // mudará o valor no endereço que está alocado o valor de x
    printf("O valor atual de x: %i\n", x);
    return 0;
}