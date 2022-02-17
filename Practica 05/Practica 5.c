#include <stdio.h>
#include <stdlib.h>

//Practica 5 Máximo común divisor
int main()
{
    int M, N, R;
    do
    {
        printf("Importante: el programa se ejecutara en bucle mientras no ingrese dos numeros iguales \n");
        printf("Ingresa el numero mayor: \n");
        scanf("%d", &M);
        printf("Ingresa el numero menor: \n");
        scanf("%d", &N);
        do
        {
            R = M % N;
            if (R != 0)
            {
                M = N;
                N = R;
            }
        } while (R != 0);
        printf("El mcd es: %d \n\n\n", N);
    } while (M != N);
    system("PAUSE");
    return 0;
}