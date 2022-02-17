#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int longitud;
    printf("Recuerde escribir en bloques de 4, es decir\n110010 es incorrecto\n00110010 es la manera correcta\n");
    printf("De cuantos bloques de 4 se compone su numero?: ");
    scanf("%d", &longitud);
    int temp[longitud];
    for (size_t i = 0; i < longitud; i++)
    {
        printf("Escriba el bloque %d de su numero\n", i + 1);
        scanf("%d", &temp[i]);
    }
    for (size_t i = 0; i < longitud; i++)
    {
        {
            if (temp[i] == 0)
                printf("0");
            else if (temp[i] == 1)
                printf("1");
            else if (temp[i] == 10)
                printf("2");
            else if (temp[i] == 11)
                printf("3");
            else if (temp[i] == 100)
                printf("4");
            else if (temp[i] == 101)
                printf("5");
            else if (temp[i] == 110)
                printf("6");
            else if (temp[i] == 111)
                printf("7");
            else if (temp[i] == 1000)
                printf("8");
            else if (temp[i] == 1001)
                printf("9");
            else if (temp[i] == 1010)
                printf("A");
            else if (temp[i] == 1011)
                printf("B");
            else if (temp[i] == 1100)
                printf("C");
            else if (temp[i] == 1101)
                printf("D");
            else if (temp[i] == 1110)
                printf("E");
            else if (temp[i] == 1111)
                printf("F");
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}