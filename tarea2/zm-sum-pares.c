#include <stdio.h>
int sumaPar(int n) {
    int suma = 0;
    int primero = 1;
    int i = 2;

    printf("Si n = %d, suma = ", n);

    while (i <= n) {
        if (i != 2) {
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

    sumaPar(n);

    return 0;
}//creo que el 'while' es la mejor opción en este caso
