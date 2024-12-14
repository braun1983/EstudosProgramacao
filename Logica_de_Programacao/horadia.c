#include <stdio.h>

int main()
{
    /*variveis */
    int hora;
    /*entrada de dados*/
    printf ("Digite que horas são:");
    scanf ("%d", &hora);
    /*estrutura condicional */
    if ((hora > 1) && (hora <=12))
    {
        printf ("Agora são %d hora. Bom dia!", hora);

    }
    else if ((hora>= 12) && (hora <=18))
    {
        printf("Agora são %d. Boa tarde!", hora);

    }
    else
    {
        printf("Agora são %d. Boa noite!", hora);
    }
   /*fim do programa*/
    return 0;
}

