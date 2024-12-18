#include <stdio.h>
#include <string.h>

/*função */
    void limpar_entrada () /* função para limpar buffer de entrada */
    {
        char c;
        while ((c = getchar ()) != '\n' && c!=EOF)
        {

        }
    }

    void ler_texto (char *buffer, int length) /* função p/ excluir quebra de linha causado pelo enter*/
    {
        fgets (buffer, length, stdin);
        strtok(buffer,"\n" );

    }
/* ínicio */

    int main()
{
/*variáveis */

    char nome1[50], nome2[50];
    char genero1, genero2;
    int idade1, idade2;
    double media;

    /* entrada de dados */

    printf ("Digite o primeiro nome:");
    ler_texto (nome1, 50);
    printf("Digite a Idade:");
    scanf ("%d",&idade1);
    printf ("Digite o gênero:");
    limpar_entrada();
    scanf ("%c", &genero1);

    limpar_entrada();
    printf ("Digite o segundo nome:");
    ler_texto (nome2, 50);
    printf("Digite a Idade:");
    scanf ("%d",&idade2);
    printf ("Digite o gênero:");
   limpar_entrada();
    scanf ("%c", &genero2);

    media= (double) (idade1+ idade2)/2;


    /* impressão de dados */

    printf ("A primeira pessoa chama-se %s, tem %d anos e seu gênero é %c \n" , nome1, idade1, genero1 );
    printf ("A segunda pessoa chama-se %s, tem %d anos e seu gênero é %c \n", nome2, idade2, genero2 );
    printf ("A idade média de %s e %s é de %.1lf anos.", nome1, nome2, media);
/*fim do programa*/
return 0;

}
