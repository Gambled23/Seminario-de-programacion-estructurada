#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Practica 11
//Variables
int palindromocheck;
char palabra[15], palabraInv[15];
//Funciones
void palindromo();
int main()
{
    do
    {
        printf("Ingresa en minusculas una palabra maximo 15 caracteres\n");
        gets(palabra);
        palindromo();
    } while (palindromocheck == 0);
    system("PAUSE");
    return 0;
}
void palindromo()
{
    //Invertir cadenas
    strcpy(palabraInv, palabra);
    strrev(palabraInv);
    //Comparar ambas cadenas
    if (strcmp(palabraInv, palabra) == 0)
    {
        printf("\nLa palabra es un palindromo\n\n");
        palindromocheck = 1;
    }
    else
    {
        printf("\nLa palabra no es un palindromo\n\n");
        palindromocheck = 0;
    }
}