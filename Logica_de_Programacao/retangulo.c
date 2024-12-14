#include <stdio.h>
#include <math.h>
int main()
{
    /*variaveis */
    double b, h,a, d, p;

    /*entrada de dados*/
    printf ("Digite a base do retângulo: ");
    scanf ("%lf", &b);
    printf ("Digite a altura do retângulo: ");
    scanf ("%lf", &h);


    /*caculos*/
    a = b*h;
    p = 2*(b+h);
    d = sqrt (pow(b ,2.0) + pow(h,2.0));

    /*saída de dados*/
    printf ("Para um retângulo de base %lf e altura %lf", b, h);
    printf ("A area do retângulo é:%.4lf\n", a);
    printf ("O perímetro do retânguloé:%.4lf\n", p);
    printf ("A diagonal do retânguloé:%.4lf\n", d);

    return 0;

}
