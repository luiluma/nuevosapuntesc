 **BUCLE DO WHILE, EJEMPLO Y EJERCICIOS**

~ El bucle while solo se ejecuta si la función se cumple.

~ El bucle Do-while se ejecutara siempre al menos una vez 
int main () {

    int i;
    i = 10;

    while  ( i < 16) {
        printf ("Esto si se ejecutará\n");
        i++;
    }
return 0; 
}


**BUCLES ANIDADOS Y EJERCICIOS DEL CRONOMETRO**

Bucle anidado: Bucles anidados Un bucle anidado es un bucle que se encuentra incluido en el bloque de sentencias de otro bloque. Los bucles pueden tener cualquier nivel de anidamiento (un bucle dentro de otro bucle dentro de un tercero, etc.). Al bucle que se encuentra dentro del otro se le puede denominar bucle interior o bucle interno.

**Ejercicio calcular Factorial y Como depurar en Dev C++**

• El factorial de un entero positivo n, el factorial de n o n factorial se define en principio como el producto de todos los números enteros positivos desde 1 (es decir, los números naturales) hasta n. Por ejemplo: 5!=1×2×3×4×5=120. {displaystyle 5!=1times 2times 3times 4times 5=120. }5!=1×2×3×4×5=120.


EJEMPLO POR CODIGO 

int main () {
 // EL FACTORIAL HACE REFERENCIA A 1*2*3*4*5 =120 se le suma 1 valor al anterior hasta llegar al número que queremos.
     int x,i,fact;

     fact = 1;

       printf ("Introduce un número para calcular su factorial: ");
      scanf ("%i" ,&x);


    for (i = 1; i <= x; i++) {
        fact = fact * i;
    }

       printf ("El factorial de %i es %i\n" ,x,fact);

return 0;
}

*POR QUÉ SE DEPURA?

Lo que ocurre es que cuando usamos los bucles, cada vez se va siendo mas complicado
 el retener nosotros en la memoria el vlaor de cada variable.

  **RUTAS DE ESCAPE Y CALCULAR NUMEROS PRIMOS**

  * Una ruta de escape, se usa para salir de un o de los bucles antes de que finalicen

// IMPRIMIR EN PANTALLA TODOS LOS NUMEROS PRIMOS ENTRE 2 Y 2000.

#include <stdio.h>
 
int main () {

 int i, j, k, aux;

    for (i = 2; i < 2000; i++) {

        k = 0;
     for (j = 2; j < i && k != 1; j++) {
         aux = i % j;
         if (aux == 0) {
            k = 1;
         }
     }    
     if ( k != 1) {
       printf ("%i, ",i);
     }
    }  
    return 0;  
}    
