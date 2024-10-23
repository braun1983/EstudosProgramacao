#include <stdio.h>

int main(){
    int numeros[5];
    int i;

    printf("Digite 5  números inteiros:\n");
    for (i=0; i<5; i++){
        printf("Digige  o %d número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf ("os números na ordem inversa são:\n");

    for (i=4; i>=0; i--){
        printf("%d \n", numeros[i]);
    }
    return 0;
    
}