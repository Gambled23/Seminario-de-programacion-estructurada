#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Practica 11
//Variables
char palabra[10], palabraInv[];
//Funciones
void palindromo();
int main ()
{
    printf("Ingresa una palabra\n");
    gets(palabra);
    palindromo();
    system("PAUSE");
    return 0;
}
void palindromo ()
{
    int longitud, palindromoCheck=0;
    strcpy(palabraInv, palabra);
    longitud = strlen(palabra);
    for (size_t i = 0; i < longitud+1; i++)
    {
        printf("%c\n",palabra[0]);
        /*if (palabra[i] == palabraInv[i]);
        {
            
            palindromoCheck++;
        }*/
    }
    if (palindromoCheck == longitud+1)
    {
        printf("La palabra es un palindromo\n");
    }else
    {
        printf("La palabra no es un palindromo\n");
    }
    
}