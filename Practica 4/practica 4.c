#include <stdio.h>
#include <stdlib.h>

//Practica 4 signos zodiacales
int main()
{
    //Ingreso de datos
    int dia, mes, signo;
    printf("Ingresa tu dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Indica el numero del mes en el que naciste\n1.Enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n6.Junio\n7.Julio\n8.Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre\nMes: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1: //Acuario
        if (dia < 20)
        {printf("Tu signo zodiacal es: Capricornio\n");}
        else
        {printf("Tu signo zodiacal es: Acuario\n");}
        break;
    case 2: //Piscis
        if (dia < 19)
        {printf("Tu signo zodiacal es: Acuario\n");}
        else
        {printf("Tu signo zodiacal es: Piscis\n");}
        break;
    case 3: //Aries
        if (dia < 19)
        {printf("Tu signo zodiacal es: Piscis\n");}
        else
        {printf("Tu signo zodiacal es: Aries\n");}
        break;
    case 4: //Tauro
        if (dia < 20)
        {printf("Tu signo zodiacal es: Aries\n");}
        else
        {printf("Tu signo zodiacal es: Tauro\n");}
        break;
    case 5: //Geminis
        if (dia < 21)
        { printf("Tu signo zodiacal es: Tauro\n");}
        else
        {printf("Tu signo zodiacal es: Geminis\n");}
        break;
    case 6: //Cancer
        if (dia < 21)
        {printf("Tu signo zodiacal es: Geminis\n");}
        else
        {printf("Tu signo zodiacal es: Cancer\n");}
        break;
    case 7: //Leo
        if (dia < 23)
        {printf("Tu signo zodiacal es: Cancer\n");}
        else
        {printf("Tu signo zodiacal es: Leo\n");}
        break;
    case 8: //Virgo
        if (dia < 23)
        {printf("Tu signo zodiacal es: Leo\n");}
        else
        {printf("Tu signo zodiacal es: Virgo\n");}
        break;
    case 9: //Libra
        if (dia < 23)
        {printf("Tu signo zodiacal es: Virgo\n");}
        else
        {printf("Tu signo zodiacal es: Libra\n");}
        break;
    case 10: //Escorpio
        if (dia < 23)
        {printf("Tu signo zodiacal es: Libra\n");}
        else
        {printf("Tu signo zodiacal es: Escorpio\n");}
        break;
    case 11: //Sagitario
        if (dia < 22)
        {printf("Tu signo zodiacal es: Escorpio\n");}
        else
        {printf("Tu signo zodiacal es: Sagitario\n");}
        break;
    case 12: //Capricornio
        if (dia < 22)
        {printf("Tu signo zodiacal es: Sagitario\n");}
        else
        {printf("Tu signo zodiacal es: Capricornio\n");}
        break;
    default: printf("Has ingresado un numero que no esta en las opciones\n");
        break;
    }
    system("PAUSE");
    return 0;
}