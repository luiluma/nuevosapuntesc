**PUNTEROS Y AMPERSAND**

Los punteros en C se utilizan para señalar la dirección de la variable. Estas variables se utilizan para la asignación dinámica de memoria en C. Estas variables se declaran con un asterisco para mostrar que la variable es un puntero.

Mediante los punteros podemos hacer referencia a las posiciones de memoria de nuestras variables, porque al fin y al cabo un puntero no es más que una variable cuyo interior es una dirección de memoria.


**SIGNO &**
Es conocido también por su nombre en inglés ampersand, proveniente a su vez de la expresión and per se and, es decir, «y por sí mismo y», antiguamente usada como parte de la retahíla para la memorización del alfabeto. 

**ARRAYS Y VECTORES**:

~ Un array es una estructura, que lo que hace es almacenar dentro de la estructura muchas variables del mismo tipo. Los vectores empiezan con la posición cero 
Los vectores son contenedores secuenciales, mientras que Array es una estructura de datos de nivel inferior. 

EJEMPLO: 
int main () {

    int v [] = {3,5,8,7,9};
  printf ("El valor de la posición 0 es: %i" ,v[0]); 

  return 0;  
}

para utilizar un vector dentro de una función solo se le coloca el nombre:
fun (v);
