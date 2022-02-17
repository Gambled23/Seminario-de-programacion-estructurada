#include <stdio.h>
#include <stdlib.h>

//Tabla de multiplicar
int main()
{
    int base, cont=1, res;
    printf("De que numero quieres la tabla?: ");
    scanf("%d", &base);
    do
    {
        res= base * cont;
        printf("%d x %d es %d\n", base, cont, res);
        cont++;
    } while (cont <=10);
    system("PAUSE");
    return 0;
}