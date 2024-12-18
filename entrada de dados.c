#include <stdio.h>
#include <string.h>
int main()
{
    int idade;
    double salario, altura;
    char nome [50];

    printf ("Digete a idade:");
    scanf ("%d", &idade);
    printf ("Digte o salario:");
    scanf ("%lf", &salario);
    printf ("Digte a altura:");
    scanf ("%lf", &altura);
    printf ("Digte o nome:");
    scanf ("%s", nome);


    printf ( "A idade é: %d\n", idade);
    printf ("o salario é: %lf\n", salario);
    printf ("a altura é: %lf\n", altura);
    printf ("O nome é: %s\n", nome);
    


}
