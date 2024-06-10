#include <stdio.h>
int sumaCuadrados(int n) {
    int suma = 0;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    do {
        if (i != 1) {
            printf(" + ");
        }
        printf("%d^2", i);
        suma += i * i;
        i++;
    } while (i <= n);

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaCuadrados(n);

    return 0;
}//creo que el 'do while' es la mejor opción en este caso e incluso el while
