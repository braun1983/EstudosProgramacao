#include <stdio.h>

int main()
{
    /*variaveis*/
    int multi,i, prod;

    /*entrada de dados */

    printf ("Digite o multiplicador:");
    scanf ("%d", &multi);
/*estrutura de repetição - for */
 for (i=0; i!=11; i++) /* o ideal é i=1,  e a condição pode ser i<=10 */
 {
     prod = i * multi;
     printf ("%d X %d = %d\n", i, multi, prod);

 }


return 0;
}
