#include <stdio.h>
int potencia(int num1, int num2){
    long long resultado = 1;
    for (int i = 0; i < num2; i++) {
        resultado *= num1;
    }
    return resultado;
    }

int main() {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    
    printf("%d^%d = %lld", base, exponente, potencia(base, exponente));

    return 0;
}