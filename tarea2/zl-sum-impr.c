#include <stdio.h>
int sumaImpar(int n) {
    int suma = 0;
    int primero = 1;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    while (i <= n) {
        if (i != primero) {
            printf(" + ");
        }
        printf("%d", i);
        suma += i;
        i += 2;
    }

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaImpar(n);

    return 0;
}//creo que el 'while' es la mejor opción en este caso
