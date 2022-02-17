#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decbin()
{
    int arregloX[100];
    int num, temp, i = 0;
    printf("Cual numero quieres convertir a binario? ");
    scanf("%d", &num);
    while (num > 0)
    {
        arregloX[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (size_t j = i - 1; j > 0; j--)
    {
        printf("%d ", arregloX[j]);
    }
    printf("%d", arregloX[0]); //Este es necesario ya que el for no lo imprime, y con j>=0 se nos petatea
    printf("\n");
}
void bindec()
{
    int longitud, binario, resultado, resto = 0, j = 7;
    printf("De cuantos digitos es el num? ");
    scanf("%d", &longitud);
    int digito[longitud];

    printf("Ingrese el numero en binario: ");
    scanf("%d", &binario);

    for (size_t i = 8; i < longitud; i++)
    {
        digito[i] = binario % 10;
        binario = binario / 10;
    }
    for (size_t j = 7; j >= 0; j--)
        ;
    {
        resultado = (resto * 2) + digito[j];
        resto = resultado;
    }

    printf("El numero convertido es %d\n", resultado);
}
void dechex()
{
    int arregloX[100];
    int num, temp, i = 0;
    printf("Cual numero quieres convertir a hexadecimal? ");
    scanf("%d", &num);
    while (num > 0)
    {
        arregloX[i] = num % 16;
        num = num / 16;
        i++;
    }
    for (size_t j = i - 1; j > 0; j--)
    {
        if (arregloX[j] == 10)
        {
            printf("A");
        }
        else if (arregloX[j] == 11)
        {
            printf("B");
        }
        else if (arregloX[j] == 12)
        {
            printf("C");
        }
        else if (arregloX[j] == 13)
        {
            printf("D");
        }
        else if (arregloX[j] == 14)
        {
            printf("E");
        }
        else if (arregloX[j] == 15)
        {
            printf("F");
        }
        else if (arregloX[j] == 16)
        {
            printf("G");
        }
        else
        {
            printf("%d", arregloX[j]);
        }
    }
    printf("%d", arregloX[0]); //Este es necesario ya que el for no lo imprime, y con j>=0 se nos petatea
    printf("\n");
}
void hexdec()
{
}
void binhex()
{
}
int hexbin()
{
    int longitud;
    char temp[100];

    printf("Ingresa el hexadecimal a convertir\n");
    gets(temp);
    longitud = strlen(temp);
    for (size_t i = 0; i < longitud; i++)
    {
        if (temp[i] == '0')
            printf("0000 ");
        else if (temp[i] == '1')
            printf("0001 ");
        else if (temp[i] == '2')
            printf("0010 ");
        else if (temp[i] == '3')
            printf("0011 ");
        else if (temp[i] == '4')
            printf("0100 ");
        else if (temp[i] == '5')
            printf("0101 ");
        else if (temp[i] == '6')
            printf("0110 ");
        else if (temp[i] == '7')
            printf("0111 ");
        else if (temp[i] == '8')
            printf("1000 ");
        else if (temp[i] == '9')
            printf("1001 ");
        else if (temp[i] == 'A')
            printf("1010 ");
        else if (temp[i] == 'B')
            printf("1011 ");
        else if (temp[i] == 'C')
            printf("1100 ");
        else if (temp[i] == 'D')
            printf("1101 ");
        else if (temp[i] == 'E')
            printf("1110 ");
        else if (temp[i] == 'F')
            printf("1111 ");
    }
    return 0;
}
int main()
{
    int opc;
    printf("1.- Decimal a Binario\n2.- Binario a Decimal\n3.- Decimal a Hexadecimal\n4.- Hexadecimal a Decimal\n5.- Binario a Hexadecimal\n6.- Hexadecimal a Binario\n7.- Salir\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        printf("Has seleccionado decimal-binario\n");
        decbin();
        break;
    case 2:
        printf("Has seleccionado binario-decimal\n");
        bindec();
        break;
    case 3:
        printf("Has seleccionado decimal-hexadecimal\n");
        dechex();
        break;
    case 4:
        printf("Has seleccionado hexadecimal-decimal\n");
        hexdec();
        break;
    case 5:
        printf("Has seleccionado binario-hexadecimal\n");
        binhex();
        break;
    case 6:
        printf("Has seleccionado hexadecimal-binario\n");
        hexbin();
        break;
    case 7:
        printf("Has seleccionado salir del programa\n");
        break;
    default:
        printf("La opcion seleccionada no existe\n");
        break;
    }
    system("PAUSE");
    return 0;
}