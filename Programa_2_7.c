//Jireth Soffia Yañez Gutierrez-20241135051
//24-10-2025
//condiciones son numéricas 0 → falso, ≠ 0 → verdadero.
#include <stdio.h>    // Incluye la librería estándar de entrada y salida
                      // necesaria para usar printf

int main()            // Función principal donde comienza la ejecución del programa
{
    if (0)            // Condición falsa, porque 0 en C significa "falso"
    {
        printf("Esta instrucción nunca se ejecuta\n");       // No se ejecuta
        printf("porque la condición siempre es falsa (0).\n"); // Tampoco se ejecuta
    }                   // Fin del bloque del primer if

    if (-38)            // Condición verdadera, porque cualquier número distinto de 0
                        // (incluso negativo) se considera "verdadero" en C
        printf("Esta instrucción siempre se ejecuta.\n");    // Se ejecuta porque la condición es verdadera

    return 0;           // Finaliza el programa 
}

