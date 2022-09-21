**APUNTES DE LENGUAJE C** 
//sintaxis,macros,opraciones basicas,operadores de incremento.

**Sintaxis de lenguaje C**

La sintaxis básica en C determina la forma en que se agrupan los caracteres para formar tokens, que son la unidad minima de programació en C.
 como primera regla siempre se debe DECLARAR LA VARIABLE ejemplo: (int)

**MACROS**
un macro debe definirse antes de la función main de la misma forma que definíamos constantes, usando #define aunque a diferencia de las mismas, luego del nombre de la macro colocaremos entre paréntesis sus parámetros (sin especificar el tipo de dato) y luego de ello definiremos en una sola línea el cuerpo de la misma.
ejemplo: #define nombre de la macro, luego int main ().


**OPERACIONES BÁSICAS CON C**

#include <stdio.h>

int main () {
int x,y;

x = 12;
y = 3;

//operacion basica de la suma

x = x + y;

printf ("El valor de x + y es: %i \n" ,x);
return 0;
 }

¡AYUDA! CON CADA OPERACION MATEMATICA ES EL MISMO PROCESO, SOLO CAMBIARIAN LOS SIGNOS

POW= ES UN COMANDO PARA ELEVAR LOS NUMEROS ENTRE SI
RAIZ CUADRADA= sqrt (x);

abreviacion de una variable:

x = x + y ;

para no ponerla tan extendida, se puede hacer asi:

x + = y;

OPERADORES DE INCREMENTO:
El operador de incremento aumenta el valor de su operando en 1. El operando debe ser un tipo de dato aritmético o puntero, y debe hacer referencia a un objeto modificable. Similarmente, el operador de decremento disminuye el valor de su operando en 1. El valor de los punteros se incrementa (o disminuye) por una cantidad que hace que apunte al siguiente (o anterior) elemento adyacente en memoria.

**ALGORITMO DE BURBUJA, U ORDENAMIENTO POR METODO DE BURBUJA** 
 es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de posición si están en el orden equivocado.

En el algoritmo de burbuja solamente le ponemos un auxiliar para meter uno de los dos valores:

EJEMPLO: aux = x;
x = y ;
y = aux;
puede ser tambien al reves, la idea es siempre tener ese auxiliar para uno de los valores 

//Bloque 1.7 Algoritmo de burbuja

#include <stdio.h>

int main () {
 
 int x, y, aux;

 printf ("El valor de x es: ");
 scanf ("%i" , &x);

 printf ("El valor de y es: ");
scanf ("%i" , &y);

aux =x;
x = y;
y = aux;

printf ("el valor de x es: %i\n\n" ,x);
printf ("el valor de y es: %i\n\n" ,y);

return 0;
 }


 **BLOQUE 2.1 ESTRUCTURAS SELECTIVAS**
 una estructura de selección se produce cuando el código de tu programa ejecuta uno de varios resultados posibles, basado en el valor de una variable. En la programación en C, los dos tipos de estructuras de selección son sentencias "if" y casos de "switch".
 ~Las estructuras selectivas siempre comienzan con la palabra if, que en ingles significa si (es una condición)

~ Luego  vienen paréntesis y dentro de ellos escribimos una condición.
se ponen dos paréntesis para una comparación  , y un solo paréntesis cuando es asignación.
le damos a x el valor =5


NO ES MAS QUE LA FORMA QUE TENEMOS NOSOTROS EN EL CODIGO DE HACER QUE SE EJECUTEN O NO CIERTAS LINEAS DE CODIGO EN FUNCION DE UNA CONDICION.


