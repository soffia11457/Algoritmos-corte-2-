//Jirerh Soffia Yañez Gutiérrez
//20241135051
//24-10-2025
//validar si un número es par o impar. 
#include <stdio.h>   // Librería estándar de entrada y salida (permite usar printf y scanf)

int main()           // Función principal del programa
{
    int num;         // Declaramos la variable 'num' para guardar el número que ingresará el usuario

    // Solicitar el número al usuario
    printf("Por favor, ingrese un número entero: ");  
    scanf("%d", &num);   // Lee el valor ingresado por el usuario y lo almacena en 'num'
                         // %d indica que se espera un número entero
                         // &num pasa la dirección de memoria de la variable 'num' a scanf

    // Evaluar si el número es par o impar
    if (num % 2 == 0)    // Si el residuo de dividir 'num' entre 2 es igual a 0, es par
        printf("El número %d es par.\n", num);
    else                 // Si no, entonces es impar
        printf("El número %d es impar.\n", num);

    return 0;            // Fin del programa, devuelve 0 indicando que todo salió bien
}
