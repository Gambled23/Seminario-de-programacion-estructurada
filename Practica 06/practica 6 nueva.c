#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Prática 6 números perfectos
int main()
{
    int num = 1, cont = 1, temp = 1, tipo = 0, count = 0, numPerfecto;
    /*El 2 se usa por separado ya que el 2 tiene la peculiaridad de no poder ser detectado por el algoritmo para
    detectar numero primos, pues lo detecta como un numero no primo, y no se puede usar para el algoritmo de
    Euclides de numeros perfectos*/
    numPerfecto = (pow(2, 2 - 1)) * (pow(2, 2) - 1);
    printf("Un numero perfecto es: %d \n", numPerfecto);
    //Ciclo numeros perfectos
    for (size_t i = 0; i < 8; i++)
    {
        //Reiniciar el ciclo y tratar con el siguiente numero
        cont = 1;
        tipo = 0;
        num++;
        //Calcular si un numero es primo
        do
        {
            cont++;
            temp = num % cont;
            if (temp == 0)
            {
                tipo++;
            }
        } while (cont < num - 1);
        if (tipo == 0) //Numeros primos Euclides
        {
            numPerfecto = (pow(2, num - 1)) * (pow(2, num) - 1);
            printf("Un numero perfecto es: %d \n", numPerfecto);
        }
    }
    system("PAUSE");
    return 0;
}