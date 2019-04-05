#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    char opcion;
    float numeroUno;
    float numeroDos;

    do
    {
        printf("        CALCULADORA \n   1. Suma de dos numeros.\n   2. Resta de dos mumeros.\n   3. Multiplicacion de dos numeros.\n   4. Dividicion de dos numeros.\n   5. Factorial de los numeros.\n   6. Salir.\n");
        printf("  A = X");
        printf("\n  B = Y");

        do
        {
            printf( "\n   Introduzca una opcion 1-6: " );
            scanf( "%c", &opcion);

        }while ( opcion < '1' || opcion > '6' );

    funciones(opcion, numeroUno, numeroDos);
    } while ( opcion != '6' );
    return 0;
}
