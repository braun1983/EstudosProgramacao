#include <stdio.h>

int main()
{
    int i, qtn_numeros, soma, qtn_pares, qtn_impares, maior_numero, menor_numero;
    float media;
    soma = 0;
    media = 0;
    qtn_pares = 0;
    qtn_impares = 0;

    do
    {
        printf("Quantos números deseja analisar? (entre 1 e 10)");
        scanf("%d", &qtn_numeros);

        if (qtn_numeros < 0 || qtn_numeros > 10)
        {
            printf("Número inválido! Digite um número entre 1 e 10.\n");
        }
    } while (qtn_numeros < 0 || qtn_numeros > 10);

    int vetor_numeros[qtn_numeros];

    for (i = 0; i < qtn_numeros; i++)
    {
        printf("Digite o %d° número: ", (i + 1));
        scanf("%d", &vetor_numeros[i]);
    }

    menor_numero = vetor_numeros[0];
    maior_numero = vetor_numeros[0];

    printf("\nOs números digitados foram: ");

    for (i = 0; i < qtn_numeros; i++)
    {

        printf("%d; ", vetor_numeros[i]);
        

        soma += vetor_numeros[i];
        media = soma / qtn_numeros;
        if (vetor_numeros[i] % 2 == 0)
        {
            qtn_pares++;
        }
        else
        {
            qtn_impares++;
        }

        if (vetor_numeros[i] < menor_numero)
        {
            menor_numero = vetor_numeros[i];
        }
        else if (vetor_numeros[i] > maior_numero)
        {
            maior_numero = vetor_numeros[i];
        }
    }
    
    printf("\nA soma de todos os números: %d \n", soma);
    printf("A média dos números: %4.2lf \n", media);
    printf("A quantidade de números pares: %d \n", qtn_pares);
    printf("A quantidade de números ímpares: %d \n", qtn_impares);
    printf("O maior número digitado: %d \n", maior_numero);
    printf("O menor número digitado: %d \n", menor_numero);

    return 0;
}
/*
Exercício: Análise de Números
Crie um programa que:

Peça ao usuário a QUANTIDADE de números que ele quer analisar (este valor deve ser entre 1 e 10)
Depois, leia cada um dos números (estes SIM podem ser positivos ou negativos)

Exemplo:

Primeiro pergunta: "Quantos números quer analisar? (1-10)"

Esta resposta deve ser entre 1 e 10


Depois pede cada número: "Digite o 1º número:"

Estes números podem ser quaisquer valores (positivos ou negativos)



Então:

A QUANTIDADE deve ser entre 1 e 10
Os NÚMEROS digitados podem ser quaisquer valores (-50, 0, 42, -123, etc)

Calcule e mostre:

A soma de todos os números
A média dos números
Quantos números são pares
Quantos números ímpares
O maior número digitado
O menor número digitado

*/