#include <stdio.h>
    int raiz(int num){
        int raizCubica = 0;
        for (raizCubica = 0; num >= 0; raizCubica++) {
        num -= raizCubica * raizCubica * raizCubica;
        }

        raizCubica--;

        printf("%d^(1/3) = %d\n", num + raizCubica * raizCubica * raizCubica, raizCubica);
    }

int main() {
    int numero;

    printf("Ingrese el número: ");
    scanf("%d", &numero);
    raiz(numero);



    return 0;
}
