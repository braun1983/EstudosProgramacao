#include <stdio.h>

int main()
{
    char nome[30];
    float nota1, nota2, nota3, media;
    int divisor;
    divisor = 3;

    printf("======Sistema de Notas======\n");
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    if (nota1 >= 0 && nota1 <= 10)
    {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if (nota2 >= 0 && nota1 <= 10)
        {
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);
            if (nota3 >= 0 && nota3 <= 10)
            {
                media = (nota1 + nota2 + nota3) / divisor;
                if (media < 5.0)
                {
                    printf("Aluno: %s: \n", nome);
                    printf("Média final: %4.2f\n", media);
                    printf("Reprovado!\n");
                }
                else if (media >= 5.0 && media <= 6.9)

                {
                    printf("Aluno: %s: \n", nome);
                    printf("Média final: %4.2f\n", media);
                    printf("Recuperação!\n");
                }
                else
                {
                    printf("Aluno: %s: \n", nome);
                    printf("Média final: %4.2f\n", media);
                    printf("Aprovado!\n");
                }
            }
            else
            {
                printf("A nota tem de ser entre 0 e 10.\n");
                printf("Digite novamente a terceira nota: ");
                scanf("%f", &nota3);
            }
        }

        else
        {
            printf("A nota tem de entre 0 e 10.\n");
            printf("Digite novamente a segunda nota: ");
            scanf("%f", &nota2);
        }
    }
    else
    {
        printf("A nota tem de entre 0 e 10.\n");
        printf("Digite novamente a primeira nota: ");
        scanf("%f", &nota1);
    }

    
    return 0;
}

/*
Exercício: Sistema de Notas
Crie um programa em C que:

Peça ao usuário para inserir o nome do aluno
Solicite 3 notas de provas (valores de 0 a 10)
Calcule a média das notas
Determine se o aluno está:

Aprovado (média >= 7.0)
Em Recuperação (média entre 5.0 e 6.9)
Reprovado (média < 5.0)


Mostre na tela:

Nome do aluno
As três notas
A média calculada
O status do aluno (Aprovado/Recuperação/Reprovado)



Requisitos adicionais:

O programa deve validar se as notas estão entre 0 e 10
Caso uma nota inválida seja inserida, deve pedir novamente
A média deve ser mostrada com duas casas decimais

Este exercício vai te ajudar a praticar:

Variáveis
Entrada/Saída
Operadores matemáticos
Estruturas de controle (if/else)
Validação de dados*/
