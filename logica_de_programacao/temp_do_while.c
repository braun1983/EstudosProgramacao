#include <stdio.h>
void limpar_entrada () /* função para limpar buffer de entrada */
{
    char c;
    while ((c = getchar ()) != '\n' && c!=EOF)
    {

    }
}
int main()
{
    /*variaveis*/

    double c, f;
    char resp;


    /*entrada de dados e estrutura de repetição*/

    do
    {
        printf("Digite a temperatura de Celsius:");
        scanf ("%lf", &c);
        f =  9.0 * c/ 5.0+ 32.0;
        printf("O equivalente em Fahrenheit é: %lf\n", f);
        printf("Deseja continuar (s/n):");
        limpar_entrada();
        scanf ("%c", &resp);

    }
    while (resp=='s');

    return 0;

}
