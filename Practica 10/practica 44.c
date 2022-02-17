#include <stdio.h>
#include <stdlib.h>

//Practica 10 Multiplicacion de matrices
int main()
{
    int a[3][3], b[3][3], c[3][3];
    //Llenar ambas matrices
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("Dame el elemento %d, %d del arreglo a \n", i, j);
            scanf("%d", &a[i][j]);
            printf("Dame el elemento %d, %d del arreglo b \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //Multiplicar matrices
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
            printf("c[%d][%d] = a[%d][0] * b[0][%d] + a[%d][1] * b[1][%d] + a[%d][2] * b[2][%d]\n", i, j, i, j, i, j, i, j);
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d,%d = %d \n", i, j, c[i][j]);
        }
    }
    system("PAUSE");
    return 0;
}