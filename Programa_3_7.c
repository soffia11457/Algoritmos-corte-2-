//Jireth Soffia Yañez Gutierrez -20241135051
//24-10-2025
#include <stdio.h>   // Librería estándar para entrada/salida

int main()
{
    int a, b;   // Declaración de variables enteras

    // Pedimos al usuario que ingrese los valores
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);   // Lee el valor de 'a' ingresado por el usuario

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);   // Lee el valor de 'b' ingresado por el usuario

    // Estructura condicional para mostrar la respuesta contraria
    if (a > b)
    {
        // Si 'a' es mayor, mostramos lo contrario
        printf("\ta (%d) NO es mayor que b (%d).\n", a, b);
    }
    else if (a < b)
    {
        // Si 'a' es menor, mostramos lo contrario
        printf("\ta (%d) NO es menor que b (%d).\n", a, b);
    }
    else
    {
        // Si son iguales, también decimos lo contrario
        printf("\ta (%d) y b (%d) NO son iguales.\n", a, b);
    }

    // Mensaje final
    printf("\tEl programa sigue su flujo.\n");

    return 0;  // Fin del programa
}

