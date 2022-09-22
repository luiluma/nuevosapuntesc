#include <stdio.h>

void fun (int a[]);
void imprimir (int x[]) ;
int main () {

    int v [2];
    imprimir (v);
    fun (v);
  
  return 0;  
}

void fun (int a[]) {
    int i;

     for (i = 0; i < 2; i++){
        printf ("Introduce un valor para el vector: ");
        scanf ("%i" ,&a[i]);
     }
}

void imprimir (int x[]) {
    int i;
      for (i = 0; i < 2; i++) {
        printf ("%i " ,x[i]);
      }
        printf ("\n\n");
}

   



