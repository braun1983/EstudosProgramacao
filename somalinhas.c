#include <stdio.h>

int main()
{
/* 1° bloco - variáveis e entrada de dados */
    int l,c;

    printf ("Qual a quantidade de linhas da matriz?: ");
    scanf ("%d", &l);
    printf ("Qual a quantidade de colunas da matriz?: ");
    scanf ("%d", &c);

/*2° Bloco - criação de matrizes */
    double mat[l] [c];
    int i, j;

    for (i=0; i<l; i++)
    {
        printf ("Digites os números da %d° linha:\n", i+1);
      for (j=0; j<c; j++)
        {
        scanf("%lf", &mat[i][j]);
        }
    }
 /* 3° Bloco soma das linhas e vetores  */
    double vets[l];

    for (i=0; i<l; i++)
    {
     vets[i]=0;
      for (j=0; j<c; j++)
        {
       vets[i] = vets[i] +mat [i] [j];
        }
    }
 /* 4° Bloco -Impressão */
    for (i=0; i<l; i++)
    {
        printf ("A Soma da linha %d° é igual a: %.1lf\n", i+1, vets[i]);
    }
return 0;    
}