#include <stdio.h>
#include <stdlib.h>

//Practica 7 Tabla pitagorica
int main()
{
    printf(" x \t| \t");
    for (size_t x = 1; x < 11; x++)
    {printf("%d \t", x);}
    printf("\n-------------------------------------------------------------------------------------------");
    for (size_t a = 1; a < 11; a++)
    {
    printf("\n %d \t| \t", a);
        for (size_t b = 1; b < 11; b++)
        {printf("%d \t", a*b);}
        printf("\n");
    }
    system("PAUSE");
    return 0;
}