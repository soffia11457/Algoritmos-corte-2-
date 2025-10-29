//Jireth  Soffia Yañez Gutierrez-20241135051
//24-10.2025
#include <stdio.h>  // Incluye la biblioteca estándar de entrada/salida (para usar printf y scanf)

int main()  // Función principal: punto de entrada del programa
{
    int a, b;  // Declara dos variables enteras (a y b) que se usarán para guardar los valores ingresados por el usuario

    // Solicita al usuario que introduzca el valor de 'a'
    printf("Introduce el valor de a: ");
    scanf("%d", &a);  // Lee un número entero desde el teclado y lo almacena en la variable 'a'

    // Solicita al usuario que introduzca el valor de 'b'
    printf("Introduce el valor de b: ");
    scanf("%d", &b);  // Lee un número entero desde el teclado y lo almacena en la variable 'b'

    // Compara si 'a' es mayor que 'b'
    if (a > b)
    {
        // Si la condición se cumple (a es mayor que b), muestra un mensaje indicando eso
        printf("\ta (%d) es mayor que b (%d).\n", a, b);
    }

    // Este mensaje se muestra siempre, sin importar el resultado del if
    printf("\tEl programa sigue su flujo.\n");

    return 0;  // Indica que el programa terminó correctamente
}
	
