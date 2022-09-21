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




