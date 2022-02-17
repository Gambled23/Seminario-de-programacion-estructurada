#include <stdio.h>
#include <stdlib.h>

//Numeros primos
int main()
{
    int num, cont = 1, temp = 1, tipo = 0;
    printf("Ingresa el numero");
    scanf("%d", &num);
    do
    {
        cont++;
        temp=num%cont;
        if (temp == 0)
        {
            tipo++;
        }
    } while (cont<num-1);
    if (tipo == 0)
    {
        printf("El numero es primo");
    }
    else
    {
        printf("El numero no es primo");
    }
    system("PAUSE");
    return 0;
}