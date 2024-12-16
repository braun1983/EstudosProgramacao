#include <stdio.h>

int obeterNumeroNatural()
{
    int numero, resultado;
    char buffer;

    
    do
    {

        resultado= scanf("%d", &numero);
        if (numero < 0)
        {
            printf("O número não é natural. por favor, digite um número maior que 0:");
        } else if( resultado !=1){
            printf("Entrada inválida. Por favor, digite um número inteiro.\n");
            while ((buffer = getchar()) != '\n' && buffer != EOF); // Limpa o buffer - entender melhor
        }


    } while (numero < 0 || resultado !=1);

    return numero;
}

int main()
{
    int primeiro_numero, ultimo_numero, soma_naturais;
    printf("Digige um número natural:\n");
    printf("Digite o primeiro número: ");

    primeiro_numero = obeterNumeroNatural();

    printf("Digite o último número: ");
    ultimo_numero = obeterNumeroNatural();

    for (int i = primeiro_numero; i <= ultimo_numero; i++)
    {
        soma_naturais += i;
    }
    printf("A soma total de todos os números naturais entre %d e %d é de: %d\n", primeiro_numero, ultimo_numero, soma_naturais);
    return 0;
}