#include <stdio.h>

int main() {

/*variaveis */
int n, i;

 /*entrada de dados*/
printf (" >>Comparador preço de cerveja.<<  \nExercício de programação - Linguagem C.\n Codificado por Raphael Brun\n");
printf ("Quantas cervejas você deseja comparar os preços?");
scanf ("%d", &n);

/*vetores*/
char vetN[n] [50];
double vetP[n], vetV[n], vetT[n] ;

/* entrada de dados 2 */
for (i=0; i<n; i++)
{

printf ("Digite o nome da %da cerveja: ", i+1);
scanf("%s", vetN[i]);
printf ("Digite o preço da cerveja: R$ ");
scanf("%s", &vetP[i]);
printf ("Digite a quantidade de cerveja(ml): ");
scanf("%s", &vetV[i]);
/*cáculos e impressão */
}
printf ("O preço por 100ml de cada cerveja é:\n" );
for (i=0; i<n; i++)
{
vetT[i] =(double) (vetP[i] *100) / vetV[i];

printf ("-->%s - R$ %.2lf \n", vetN[i],vetT[i]);

}

return 0;
}
