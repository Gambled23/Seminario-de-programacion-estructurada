#include <stdio.h>
#include <stdlib.h>

//Practica 3 Analizador de triangulos
int main()
{
    //Entrada de datos
    int num1, num2, num3;
    printf("Ingrese los 3 lados del triangulo: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    //Identificar triangulo
    if ((num1 == num2) && (num2 == num3))
    {
        printf("El triangulo es un triangulo equilatero \n");
    }
    else if ((num1 != num2) && (num2 != num3))
    {
        printf("El triangulo es un triangulo escaleno \n");
    }
    else
    {
        printf("El triangulo es un triangulo isoceles \n");
    }
    //Lado mayor
    if ((num1 > num2) && (num1 > num3))
    {
        printf("El lado mayor es: %d \n", num1);
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        printf("El lado mayor es: %d \n", num2);
    }
    else if ((num3 > num1) && (num3 > num2))
    {
        printf("El lado mayor es: %d \n", num3);
    }
    else
    {
        printf("Todos los lados son iguales \n");
    }
    //De menor a mayor
    //num1
    if ((num1 <= num2) && (num2 <= num3))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num1, num2, num3);
    }
    else if ((num1 <= num3) && (num3 <= num2))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num1, num3, num2);
    }
    //num2
    else if ((num2 <= num1) && (num1 <= num3))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num2, num1, num3);
    }
    else if ((num2 <= num3) && (num3 <= num1))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num2, num3, num1);
    }
    //num 3
    else if ((num3 <= num1) && (num1 <= num2))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num3, num1, num2);
    }
    else
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num3, num2, num1);
    }
    system("PAUSE");
    return 0;
}