// Programa_5.c
// Jieth Soffia Yañez Gutiérrez 21-10-2025
//Almacenar e imprimir variables

#include <stdio.h>
int main()
{
int enteroNumero;
char caracterA = 65; // Convierte el entero a carácter ASCII.
double puntoFlotanteNumero;
// Asignar valor de teclado a una variable.
printf("Escriba un valor entero: ");
scanf("%i", &enteroNumero);
printf("Escriba un valor real: ");
scanf("%lf", &puntoFlotanteNumero);
// Imprimir valores con formato.
printf("\nImprimiendo las variables \a\n");// Muesta  un mensaje indicando que se van a mostrar las variables, incluyendo un salto de línea y un sonido de alerta
printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);// Emite el valor de la variable 'enteroNumero' como un entero, con una tabulación al inicio, seguido de un sonido de alerta y un salto de línea
printf("\t Valor de caracterA = %c \a\n", caracterA);
printf("\t Valor de puntoFlotanteNumero = %lf \a\n",
puntoFlotanteNumero);//// Imprime el valor de la variable 'puntoFlotanteNumero' como un número de punto flotante de doble precisión, con una tabulación al inicio, seguido de un sonido 
printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
printf("\t Valor de puntoFlotanteNumero\n");
printf("en notación científica = %e\n", puntoFlotanteNumero);
return 0;
}

