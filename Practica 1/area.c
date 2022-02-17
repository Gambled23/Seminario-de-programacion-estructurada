#include <stdio.h>
#include <stdlib.h>

//Prueba area C
int main()
{
    //Entrada de datos de base y altura
    int base, altura, area;
    printf("Dame el valor de la base: ");
    scanf("%d", &base);
    printf("Dame el valor de la altura: ");
    scanf("%d", &altura);

    //Calculos para el area
    area = (base * altura) / 2;
    printf("El valor del area es: %d \n", area);
    system("PAUSE");
    return 0;
}