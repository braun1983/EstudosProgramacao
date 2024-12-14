#include <stdio.h>

int main()
{
    /* variaveis*/
    int n1, n2;

    /*entrada de dados*/
    printf ("Digite o primeiro número:");
    scanf ("%d", &n1);
    printf ("Digite o segundo número:");
    scanf ("%d", &n2);

    /*estrutura de repetição*/
    while (n1!=n2)
    {
     
      if (n1<n2)
      {
          printf ("Crescente\n");  
      } 
      else
       {
          printf ("Decrescente\n");
       }

     printf ("Digite o primeiro número:");
    scanf ("%d", &n1);
    printf ("Digite o segundo número:");
    scanf ("%d", &n2);

    }
    printf ("Digitou número iguais. fim do programa.");
    return 0;
    }
