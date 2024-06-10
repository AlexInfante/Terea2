#include <stdio.h>
int sumaFraccionarios(int n) {
    float suma = 0.0;
    int i = 1;

    printf("Si n = %d, suma = ", n);

    do {
        if (i != 1) {
            printf(" + ");
        }
        printf("1/%d", i);
        suma += 1.0 / i;
        i++;
    } while (i <= n);

    printf(" = %.2f\n", suma);
}

int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    sumaFraccionarios(n);

    return 0;
}//creo que el 'do while' es la mejor opción en este caso
