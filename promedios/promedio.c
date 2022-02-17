#include <stdio.h>
#include <stdlib.h>

//
int main()
{
    int a, b, cont = 0;
    double res;
    printf("Ingresa tus numeros, para parar el programa, ingresa un 0 \n");
    scanf("%d", &a);
    do
    {
        cont++;
        scanf("%d", &b);
        a = a + b;
    } while (b != 0);
    res = a / cont;
    printf("El promedio de los numeros ingresados es: %lf \n", res);
    system("PAUSE");
    return 0;
}