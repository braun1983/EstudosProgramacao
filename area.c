#include <stdio.h>

int main()
{
    double larg, comp, valor, area, preco;
    
        larg = 0;
        comp =0;
        valor =0;
        area = 0;
        preco =0;

        printf ("Digite a lagura do terro:");
        scanf ("%lf", &larg);
        printf("Digite o comprimento do terro:");
        scanf("%lf", &comp);
        printf ("Digete o valor do metro:");
        scanf ("%lf", &valor);

        area = larg * comp;
        preco = valor * area;

        printf ("O tamanho do terro é %.1lfm²\n", area);
        printf ("o valor do terro é de R$:%.2lf\n",preco);




return 0;
}