#include <stdio.h>
#include <stdlib.h>

//
int main()
{
    int A[10], B[10], C[10], valorMin, valorMax, maxA = 0, minA = 101, maxB = 0, minB = 101;
    float promedio = 0;
    //Numeros aleatorios
    for (size_t i = 0; i < 10; i++)
    {
        A[i] = rand() %100;
        B[i] = rand() %100;
        C[i] = A[i] + B[i];
    }
    //Promedio, maximos y minimos
    for (size_t i = 0; i < 10; i++)
    {
        promedio = promedio + C[i];
        if (A[i] > maxA)
        {
            maxA = A[i];
        }
        if (A[i] < minA)
        {
            minA = A[i];
        }
        if (B[i] > maxB)
        {
            maxB = B[i];
        }
        if (B[i] < minB)
        {
            minB = B[i];
        }
    }
    promedio = promedio / 10;
    //Impresiones
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d.- de A es: %d \n", i, A[i]);
        printf("%d.- de B es: %d \n", i, B[i]);
        printf("%d.- de C es: %d \n", i, C[i]);
    }
    
    printf("El promedio es %.2f \n", promedio);
    printf("El maximo de A es %d \n", maxA);
    printf("El maximo de B es %d \n", maxB);
    printf("El minimo de A es %d \n", minA);
    printf("El minimo de B es %d \n", minB);
    system("PAUSE");
    return 0;
}