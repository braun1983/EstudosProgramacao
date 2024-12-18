#include <stdio.h>

int somar(int parcela1, int parcela2)
{
    int soma = parcela1 + parcela2;
    return (soma);
}

int subtrair(int minuendo, int subtraendo)
{
    int resto = minuendo - subtraendo;
    return (resto);
}

int multiplicar(int fator1, int fator2)
{
    int produto = fator1 * fator2;
    return (produto);
}

float dividir(float dividendo, float divisor)
{
    float quociente = dividendo / divisor;
    return (quociente);
}

int main()
{

    int num1, num2;
    float resultado;
    int operacao;
    int executar;
    executar = 1;
    while (executar != 0)
    {
        do
        {
            printf("Escolha uma operação:\n");
            printf("Digite: 1-Soma; 2-Subtração; 3-Multiplicação; 4-Divisão;\n");
            scanf("%d", &operacao);
            if (operacao < 1 || operacao > 4)
            {
                printf("Operação Inexistente. Digite uma opção entre 1 e 4");
            }
        } while (operacao < 1 || operacao > 4);

        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        switch (operacao)
        {
        case 1:
            resultado = somar(num1, num2);
            break;

        case 2:
            resultado = subtrair(num1, num2);
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            break;
        case 4:
            resultado = dividir(num1, num2);
            break;
        default:
            break;
        }
    do{
        printf("O resultado  é: %4.2f \n", resultado);
        printf("\n Deseja continuar? 0- Não; 1- Sim; : ");
        scanf("%d", &executar);
        if (executar<0 || executar> 1){
            printf("Opção inválida. Digite novamente");
        }
        } while (executar<0 || executar> 1);
        
    }
    return 0;
}