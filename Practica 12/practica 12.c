#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototipos
void decbin();
void bindec();
void dechex();
void hexdec();
void binhex();
void hexbin();

//Funciones
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
    int arregloS = 20;
    char hex[arregloS];
    long long decimal = 0, base = 1;
    int i = 0, value, longitud;
    /* Get hexadecimal value from user */
    printf("Cual numero quieres convertir? ");
    fflush(stdin);
    fgets(hex, arregloS, stdin);
    longitud = strlen(hex);
    for (i = longitud--; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("%lld\n", decimal);
}

void binhex()
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
}

void hexbin()
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
}