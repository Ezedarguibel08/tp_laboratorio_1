#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

float funciones (char opcion, float numeroUno, float numeroDos)
{
    float ciclo = 1;
    float factorial = 1;
    float factorialDos = 1;

    switch ( opcion )
    {
        case '1':
        printf( "\n   Introduzca primer numero: " );            /*case1 es la suma de dos numeros */
        scanf( "%f", &numeroUno);
        printf( "\n   Introduzca segundo numero: " );
        scanf( "%f", &numeroDos);
        printf("  A = %.2f",numeroUno);
        printf("\n  B = %.2f",numeroDos);
        printf( "\n   %.2f + %.2f = %.2f\n", numeroUno, numeroDos, numeroUno + numeroDos );
        break;

        case '2':
        printf( "\n   Introduzca primer numero: " );            /*case2 es la resta de dos numeros*/
        scanf( "%f", &numeroUno);
        printf( "\n   Introduzca segundo numero: " );
        scanf( "%f", &numeroDos);
        printf("  A = %.2f",numeroUno);
        printf("\n  B = %.2f",numeroDos);
        printf( "\n   %.2f - %.2f = %.2f\n", numeroUno, numeroDos, numeroUno - numeroDos );
        break;

        case '3':
        printf( "\n   Introduzca primer numero: " );            /*case3 es la multiplicacion de dos numeros*/
        scanf( "%f", &numeroUno);
        printf( "\n   Introduzca segundo numero: " );
        scanf( "%f", &numeroDos);
        printf("  A = %.2f",numeroUno);
        printf("\n  B = %.2f",numeroDos);
        printf( "\n   %.2f * %.2f = %.2f\n", numeroUno, numeroDos, numeroUno * numeroDos );
        break;

        case '4':
        printf( "\n   Introduzca dividendo: " );            /*case4 es la division de dos numeros*/
        scanf( "%f", &numeroUno);
        printf( "\n   Introduzca divisor: " );
        scanf( "%f", &numeroDos);
        if ( numeroDos != 0 )
            {
                printf("  A = %.2f",numeroUno);
                printf("\n  B = %.2f",numeroDos);
                printf( "\n   %.2f / %.2f = %.2f \n", numeroUno, numeroDos, numeroUno / numeroDos);
            }else
            {
                printf( "\n   Es imposible dividir por cero.\n" );
            }
            break;
        case '5':
        printf( "\n   Introduzca primer numero: " );            /*case5 es el factorial de los numeros*/
        scanf( "%f", &numeroUno);
        printf( "\n   Introduzca segundo numero: " );
        scanf( "%f", &numeroDos);
        for(ciclo=1; ciclo<=numeroUno; ciclo++)
            factorial = factorial * ciclo;
            printf("\nEl factorial del primer numero es %.2f \n",factorial);

        for(ciclo=1; ciclo<=numeroDos; ciclo++)
            factorialDos = factorialDos * ciclo;
            printf("El factorial del segundo numero es %.2f \n",factorialDos);
            break;
    }
    return 0;
}

