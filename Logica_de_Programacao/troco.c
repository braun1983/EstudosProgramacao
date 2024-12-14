#include <stdio.h>
        
       

int main ()
{
    /*variaveis*/
    double preco, recebido, troco, total;
    int quant;

    /*entrada de dados*/
    printf ("Preço unitário do produto:");
    scanf ("%lf", &preco);
    printf ("Quantidade comprada: ");
    scanf ("%d", &quant);
    printf ("Dinheiro recebido:");
    scanf("%lf", &recebido);
   
    /*cálculos */
        total= (double) preco*quant;
        troco= recebido - total;
    
    /* checar se falta dinheiro - adicional por minha conta */
     
     if (troco<0)
      {
        printf ("Dinheiro insuficente");

      } else
       {
        /* saída de dados*/
        printf("TROCO = %.2lf", troco);

       }

return 0;    

}