#include <stdio.h>

int main()
{
  /*variaveis*/
  int n, i;
  

/*entrada de dados*/

printf ("Digite quantos números você somará:");
scanf ("%d", &n);

double vet[n]; /* depois de conhecer N */
/*entrada de dados*/ 
    for (i=0; i<n; i++)
   {
    printf ("Digite os números:");
    scanf("%.1lf", &vet[i]);
      
   }
printf ("\n Os números digitados são");
  for (i=0; i<n; i++)
   {
    printf (" %lf", vet[i]);
   }
printf ("\n");

double soma =0;

 for (i=0; i<n; i++)
   {
    soma = (double) soma + vet[i];
   }
 double med = soma /n;
 printf("O valor da soma de todos os número é: %.1lf\n", soma);
 printf ("A média dos números é: %.1lf", med);

 return 0;


}