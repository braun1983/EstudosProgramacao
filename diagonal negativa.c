#include <stdio.h>

int main()
{
    /*variáveis iniciais*/
    int n;
    /*entrada de dados iniciais*/
    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &n);
   /*matriz */
    int mat[n][n];
    printf ("Digite os números da matriz:");

    for (int i=0; i<n ;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("Digite os valores [%d,%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
  /*mostrar a diagonal */
  printf("A diagonal da matriz é:");
  for (int i=0; i<n; i++)
    {
        printf("%d ", mat[i][i]);

    }

/* quantidade de negativos */
int quantnegativos;
quantnegativos=0;
for (int i=0; i<n ;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (mat [i] [j] <0)
            {
                quantnegativos = quantnegativos +1;
            }
        }
    }  
printf ("\nQuantidade de números negativos: %d", quantnegativos);

}