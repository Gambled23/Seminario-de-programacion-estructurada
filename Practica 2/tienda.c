#include <stdio.h>
#include <stdlib.h>

//Sistema para una tienda
int main()
{
    //Entrada de datos
    int cantidad, cambio, residuo, dineroCambio;
    double cambioCent, precio, iva, subtotal, total, dinero;
    printf("Cuantos productos se va a llevar?\n");
    scanf("%d", &cantidad);
    printf("Cual es el precio del producto?\n$");
    scanf("%lf", &precio);
    //Calculos precios
    subtotal = precio * cantidad;
    iva = (subtotal * 0.16);
    total = subtotal + iva;
    printf("%d piezas de producto con un precio de $%.2f dan un subtotal de $%.2f \n", cantidad, precio, subtotal);
    printf("El iva es $%.2f, lo que da un precio total de $%.2f\n\n", iva, total);
    //cambio
    printf("Cuanto dinero recibio del cliente?: $");
    scanf("%lf", &dinero);
    cambio = dinero - total;
    cambioCent = dinero - total;
    printf("Usted debe de darle $%.2f al cliente \n\n", cambioCent);
    cambioCent = dinero - total - cambio;
    //calculo billetes y monedas
    printf("Le recomendamos usar: \n");
    dineroCambio = cambio / 1000;                    //Obtener numero de billetes
    printf("%i billetes de $1000 \n", dineroCambio); //Imprimir numero de billetes
    cambio = cambio % 1000;                          //Obtener cuanto dinero sobra, ya sin los billetes
    dineroCambio = cambio / 500;
    printf("%i billetes de $500 \n", dineroCambio);
    cambio = cambio % 500;
    dineroCambio = cambio / 200;
    printf("%i billetes de $200 \n", dineroCambio);
    cambio = cambio % 200;
    dineroCambio = cambio / 100;
    printf("%i billetes de $100 \n", dineroCambio);
    cambio = cambio % 100;
    dineroCambio = cambio / 50;
    printf("%i billetes de $50 \n", dineroCambio);
    cambio = cambio % 50;
    dineroCambio = cambio / 20;
    printf("%i billetes de $20 \n", dineroCambio);
    cambio = cambio % 20;
    dineroCambio = cambio / 10;
    printf("%i monedas de $10 \n", dineroCambio);
    cambio = cambio % 10;
    dineroCambio = cambio / 5;
    printf("%i monedas de $5 \n", dineroCambio);
    cambio = cambio % 5;
    dineroCambio = cambio / 2;
    printf("%i monedas de $2 \n", dineroCambio);
    cambio = cambio % 2;
    dineroCambio = cambio / 1;
    printf("%i monedas de $1 \n", dineroCambio);
    cambio = cambio % 1;
    //Calculo Centavos
    cambio = cambioCent * 100;
    dineroCambio = cambio / 50;
    printf("%i monedas de $0.50 \n", dineroCambio);
    cambio = cambio % 50;
    dineroCambio = cambio / 20;
    printf("%i monedas de $0.20 \n", dineroCambio);
    cambio = cambio % 20;
    dineroCambio = cambio / 10;
    printf("%i monedas de $0.10 \n", dineroCambio);
    system("PAUSE");
    return 0;
}