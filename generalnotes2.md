** AYUDA CON LA DELCARACIÓN CHAR**
La declaración char *argv[] es una matriz (de tamaño indeterminado) de punteros a char, en otras palabras, una matriz de cadenas.

Y todas las matrices se descomponen en punteros, por lo que puede usar una matriz como puntero (al igual que puede usar un puntero como matriz). Entonces, *++argv primero aumenta el "puntero" para apuntar a la siguiente entrada en la matriz argv (que la primera vez en el ciclo será el primer argumento de la línea de comando) y elimina la referencia a ese puntero.


BLOQUE 2.4 EJEMPLO DE COMO POR UNA ENTRADA DE TEXTO SE AGREGUE EL VALOR DE UNA HORA, MINUTOS Y SEGUNDOS , Y POR MEDIO DE UNA CONDICION ME ARROJE SI EL RESULTADO ES CORRECTO O INCORRECTO

//Bloque 2.4 HACER QUE POR MEDIO DE UNA ENTRADA DE TEXTO, INDICAR VALOR H,MIN,SEG Y POR MEDIO DE UNAS CONDICIONALES INDICAR
//SI ES CORRECTO O INCORRECTO. 

#include <stdio.h>
 
 int main () {

    int h,min,seg;

        printf ("Insertar un valor en horas: ");
        scanf ("%i" ,&h);

        printf ("Insertar un valor en minutos: ");
        scanf ("%i" ,&min);

        printf ("Insertar un valor en segundos: ");
        scanf ("%i" ,&seg);

        if (h <= 23 && min <= 59 && seg <=59) {

        printf ("La hora es:  %i: %i: %i\n\n" ,h,min,seg);
        }

        else {
            printf ("La hora insertada NO es correcta. \n");
        }

     return 0 ; 
     }



//Bloque 2.4 HACER QUE POR MEDIO DE UNA ENTRADA DE TEXTO, INDICAR VALOR H,MIN,SEG Y POR MEDIO DE UNAS CONDICIONALES INDICAR
//SI ES CORRECTO O INCORRECTO. 

#include <stdio.h>
 
 int main () {

    int h,min,seg;

        printf ("Insertar un valor en horas: ");
        scanf ("%i" ,&h);

        printf ("Insertar un valor en minutos: ");
        scanf ("%i" ,&min);

        printf ("Insertar un valor en segundos: ");
        scanf ("%i" ,&seg);

        if (h <= 23 && min <= 59 && seg <=59) {

        printf ("La hora es:  %i: %i: %i\n\n" ,h,min,seg);
        }

        else {
            printf ("La hora insertada NO es correcta. \n");
        }

     return 0 ; 
     }
     //Bloque 2.4 HACER QUE POR MEDIO DE UNA ENTRADA DE TEXTO, INDICAR VALOR H,MIN,SEG Y POR MEDIO DE UNAS CONDICIONALES INDICAR
//SI ES CORRECTO O INCORRECTO. 

#include <stdio.h>
 
 int main () {

    int h,min,seg;

        printf ("Insertar un valor en horas: ");
        scanf ("%i" ,&h);

        printf ("Insertar un valor en minutos: ");
        scanf ("%i" ,&min);

        printf ("Insertar un valor en segundos: ");
        scanf ("%i" ,&seg);

        if (h <= 23 && min <= 59 && seg <=59) {

        printf ("La hora es:  %i: %i: %i\n\n" ,h,min,seg);
        }

        else {
            printf ("La hora insertada NO es correcta. \n");
        }

     return 0 ; 
     }

     **BLOQUE 2.4 CONDICIIONES MULTIPLES**.

     #include <stdio.h>
 
 int main () {

    int x;
        printf ("Introduzca un numero: ");
        scanf ("%i" ,&x);

        if ( x >= 1 && x <= 10 ) { // las dos && significan que las dos condiciones se tienen que cumplir entonces entran. 
        printf ("El numero %i esta entre 1 y 10\n" ,x);
     }

      else {
         printf ("El numero %i NO esta entre 1 y 10.\n" ,x);
         
     }

     return 0 ; 
    }



**HALLAR UN NUMERO MAYOR ENTRE TRES NUMEROS**
#include <stdio.h>
 
 int main () {

    int x, y, z;
    int max, min;

    printf ("Introduce el valor para x: ");
    scanf ("%i" ,&x);


    printf ("Introduce el valor para y: ");
    scanf ("%i" ,&y);


    printf ("Introduce el valor para z: ");
    scanf ("%i" ,&z);

    if (x > y) {
        if (x > z) { 
            max = x;
        } 
        else {
                max = z;
        }
    }    
        
        else {
            if ( y > z){
                  max = y;
            }     
        else {
            max = z;
        }
    }

    printf ("El mayor de todos los numeros es: %i\n" ,max);

    