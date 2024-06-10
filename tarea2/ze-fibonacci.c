#include <stdio.h>
int fibonacci(int sig){
    int primero=0, segundo=1;
    printf("%d, %d", primero, segundo);
    for (int i = 3; i <= sig; i++) {
        int siguiente = primero + segundo;
        printf(", %d ", siguiente);
        primero = segundo;
        segundo = siguiente;
    }
}
int main(){
    int n;
  
    printf ("Ingrese el valor de n: ");
    scanf ("%d", &n);

    printf("Secuencia de Fibonacci hasta el término %d:\n", n);
    printf("%d",fibonacci(n));

    return 0;
}//creo que el 'for' es la mejor opción en este caso por inicializar la variable 'i' en una sola línea
 
