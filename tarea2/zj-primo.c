#include <stdio.h>
int esPrimo(int n) {
    int num = 2, primo = 1;
    printf("El número %d ", n);
    
    while (num < n) {
        if (n % num == 0) {
            primo = 0;
        }
        num++;
    }

    if (primo == 1) {
        printf("es primo");
    } else { 
       printf("no es primo", n);
    }
}

    int main() {
    int n;
    printf("Ingrese un número (n): ");
    scanf("%d", &n);

    esPrimo(n);
    return 0;
    }
