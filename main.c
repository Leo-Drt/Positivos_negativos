#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numeros=0, positivo=0, negativo=0;
    int i;

    printf("\tVerificação dos números!\n");
    printf("Digite 5 números inteiros sendo positivo ou negativo!\n");

    for(i=0; i< 5; i++)
    {
        printf("\nDigite para verificação: ");
        scanf("%d",&numeros);

        if(numeros > 0)
        {
            printf("\nO número %d é maior que zero, portanto é positivo!\n", numeros);
            positivo++;


        }
        else
        {
            printf("\nO número %d é menor que zero, portanto é negativo!\n", numeros);
            negativo++;

        }

    }

    printf("\nDos cinco números temos:\n");
    printf("\n %d números positivos \n",positivo);
    printf("\n %d números negativos.\n\n\n",negativo);



    return 0;
}
