#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arregloDeso[100], arregloOrde[100], x, cond = 0;
    srand(time(0)); //Seed
    for (int i = 0; i < 100; i++)
    {
        arregloDeso[i] = rand() % 1000; //Guardar 100 numeros del 1-1000
        arregloOrde[i] = arregloDeso[i];
    }
    //Metodo burbuja
    for (size_t i = 0; i < 100; i++)
    {
        for (size_t j = 0; j < 100; j++)
        {
            if (arregloOrde[j] > arregloOrde[j + 1])
            {
                x = arregloOrde[j];
                arregloOrde[j] = arregloOrde[j + 1];
                arregloOrde[j + 1] = x;
            }
        }
    }
    //Imprimir ambos arreglos
    printf("Arreglo desordenado\n");
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d.- %d \n", i, arregloDeso[i]);
    }
    printf("\nArreglo ordenado\n");
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d.- %d \n", i, arregloOrde[i]);
    }
    system("PAUSE");
    return 0;
}