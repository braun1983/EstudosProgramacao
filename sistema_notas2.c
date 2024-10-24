#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float nota1, nota2, nota3, media;
    char nome[30];

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    do
    {
        printf("Digite a primeira nota:");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10)
        {
            printf("Nota inválida. Digite uma nota entre 0 e 10");
        }
    } while (nota1 < 0 || nota1 > 10);

    do
    {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 10)
        {
            printf("Nota inválida. Digite uma nota entre 0 e 10");
        }
    } while (nota2 < 0 || nota2 > 10);

    do
    {
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        if (nota3 < 0 || nota3 > 10)
        {
            printf("Nota inválida. Digite uma nota entre 0 e 10");
        }
    } while (nota3 < 0 || nota3 > 10);

    media = (nota1 + nota2 + nota3) / 3;
    printf("O Aluno:%s\n", nome);
    printf("Média:%4.2f\n", media);

    if (media < 5.0)
    {
        printf("Reprovado!\n");
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        printf("Recuperação!\n");
    }
    else
    {
        printf("Aprovado!\n");
    }
    return 0;
}
