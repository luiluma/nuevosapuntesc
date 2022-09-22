**FUNCIONES**

En programación, una función es una sección de un programa que calcula un valor de manera independiente al resto del programa. Una función tiene tres componentes importantes: el resultado (o valor de retorno ), que es el valor final que entrega la función. En esencia, una función es un mini programa. Sus tres componentes son análogos.
¿Cuál es la función de un programa?
Es una parte de un programa (subrutina) con un nombre, que puede ser invocada (llamada a ejecución) desde otras partes tantas veces como se desee. Un bloque de código que puede ser ejecutado como una unidad funcional Función (Programación).

**FUNCIONES EN C. ASPECTOS PRINCIPALES**
Una función en C es un fragmento de código que se puede llamar desde cualquier punto de un 
programa. En C podemos diferenciar entre dos tipos de funciones: 

a) Aquellas cuyo tipo de retorno es void (nulo), equiparables a lo que denominamos módulo genérico 
tipo procedimiento. 

b) Aquellas cuyo tipo de retorno es un tipo de dato (como int, double o cualquier otro), equiparables a 
lo que denominamos módulo genérico tipo función.

El flujo para una función sigue las reglas ya conocidas: al llegar el control a la sentencia return el flujo 
del programa vuelve a la sentencia inmediatamente posterior a la llamada efectuada. Si existe código 
posterior a la sentencia return final, éste será ignorado. 

 ~ Hay que recordar siempre que una "función" con tipo de retorno especificado ejecuta un código y 
devuelve un valor: podríamos decir que tiene una similitud importante con las variables: tener un valor. 
La llamada a una función desde sí misma es posible, dando lugar a un anidamiento o recursión. Habrá 
de existir una condición que evolucione para dar lugar a la salida de la recursión, regresando el control 
del flujo a la instrucción posterior desde la que se autollamó el módulo. No vamos a desarrollar 
contenidos relativos a la recursión, ya que consideramos que es una materia de estudio avanzada. 
Ejecuta estos dos pequeños programas para comprobar cómo trabajan las funciones con tipo de 
retorno void y las funciones con tipo de retorno especificado.

**Funciones de tipo Void y Factorial de un Numero con Funciones**

las funciones de tipo Void son las que no tienen retorno.
se utilizan para indicar que una función no devuelve un valor o que no tiene parámetros o ambos. Bastante consistente con los usos típicos de la palabra void en inglés.

EJEMPLO: 
#include <stdio.h>

void factorial ();
   int main () {

    factorial ();

return 0;
}

 void factorial () {
      int x,i,aux;
        aux = 1;

         printf ("Introduce un numero entero: ");
    scanf ("%i" ,&x);

 for (i = 1; i <= x; i++) {
        aux *= i;
    }
          printf ("el factorial del numero %i es %i\n\n" ,x,aux);

    }