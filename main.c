#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numeros=0, positivo=0, negativo=0;
    int i;

    printf("\tVerifica��o dos n�meros!\n");
    printf("Digite 5 n�meros inteiros sendo positivo ou negativo!\n");

    for(i=0; i< 5; i++)
    {
        printf("\nDigite para verifica��o: ");
        scanf("%d",&numeros);

        if(numeros > 0)
        {
            printf("\nO n�mero %d � maior que zero, portanto � positivo!\n", numeros);
            positivo++;


        }
        else
        {
            printf("\nO n�mero %d � menor que zero, portanto � negativo!\n", numeros);
            negativo++;

        }

    }

    printf("\nDos cinco n�meros temos:\n");
    printf("\n %d n�meros positivos \n",positivo);
    printf("\n %d n�meros negativos.\n\n\n",negativo);



    return 0;
}
