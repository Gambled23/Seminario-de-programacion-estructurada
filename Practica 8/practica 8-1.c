#include <stdio.h>
#include <stdlib.h>

//Practica 8 Dibujar figuras
int main()
{
    int opc, sizeF, sizeH, temp = 0, temp2 = 0;
    printf("De que tamano quieres la figura?\n");
    scanf("%d", &sizeF);
    do
    {
        printf("Que figura quieres hacer?\n 0.-Tamano figura \n 1.-Cuadro completo \n 2.-Contorno de cuadrado \n 3.-Triangulo superior izquierdo \n 4.-Triangulo superior derecho \n 5.-Triangulo inferior izquierdo \n 6.-Triangulo inferior derecho \n 7.-Diagonal de izquierda a derecha \n 8.-Diagonal de derecha a izquierda \n 9.-Cruz X \n 10.-Salir \n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 0:
            printf("De que tamano quieres la figura? Tamano actual: %d \n", sizeF);
            scanf("%d", &sizeF);
            break;
        case 1:
            for (size_t f = 1; f < sizeF + 1; f++)
            {
                for (size_t i = 1; i < sizeF + 1; i++)
                {
                    printf("*\t");
                }
                printf("\n\n\n\n");
            }
            break;
        case 2:
            for (size_t i = 1; i < sizeF + 1; i++)
            {
                printf("*\t");
            }
            printf("\n\n\n\n");
            for (size_t g = 1; g < sizeF - 1; g++)
            {
                printf("*\t");
                for (size_t f = 1; f < sizeF - 1; f++)
                {
                    printf("\t");
                }
                printf("*");
                printf("\n\n\n\n");
            }
            for (size_t i = 1; i < sizeF + 1; i++)
            {
                printf("* \t");
            }
            printf("\n");
            break;
        case 3:
            for (size_t f = 0; f < sizeF; f++)
            {
                for (size_t i = 0; i < sizeF - f; i++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 4:
            for (size_t f = 0; f < sizeF; f++)
            {
                for (size_t i = 0; i < sizeF - f; i++)
                {
                    printf("*");
                }
                printf("\n");
                temp++;
                for (size_t g = 0; g < temp; g++)
                {
                    printf(" ");
                }
            }
            break;
        case 5:
            temp = sizeF - 1;
            for (size_t g = 0; g < sizeF; g++)
            {
                for (size_t i = 0; i != sizeF - temp; i++)
                {
                    printf("*");
                }
                printf("\n");
                temp--;
            }
            break;
        case 6:
            temp = sizeF - 1;
            for (size_t g = 0; g < sizeF; g++)
            {
                for (size_t h = 0; h < temp; h++)
                {
                    printf(" ");
                }
                for (size_t i = 0; i != sizeF - temp; i++)
                {
                    printf("*");
                }
                printf("\n");
                temp--;
            }
            break;
        case 7:
            for (size_t i = 0; i < sizeF; i++)
            {
                printf("*\n");
                temp++;
                for (size_t g = 0; g < temp; g++)
                {
                    printf(" ");
                }
            }
            break;
        case 8:
            temp = sizeF - 1;
            for (size_t g = 0; g < sizeF; g++)
            {
                for (size_t h = 0; h < temp; h++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                temp--;
            }
            break;
        case 9:
            for (size_t i = 0; i < sizeH; i++)
            {
                for (size_t f = 0; f < temp2; f++)
                {
                    printf(" ");
                }
                printf("*");
                do
                {
                    printf(" ");
                } while (temp > sizeF - 2);
                temp = sizeF - 2;
                printf("* \n");
            }
            break;
        case 10:
            printf("Has decidido salir del programa\n");
            break;
        default:
            printf("Has ingresado una opcion que no existe\n");
            break;
        }
    } while (opc != 10);
    system("PAUSE");
    return 0;
}