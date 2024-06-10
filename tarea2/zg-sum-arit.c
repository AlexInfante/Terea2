#include <stdio.h>
int sumaAritmetica(int num){
    
    int suma = 0, i = 1;
    while (i <= num) {
        suma += i;
        if (i != num) {
            printf("%d + ", i);
        } else {
            printf("%d ", i);
        }
        i++;
    }
    printf("= %d\n", suma);
}

int main() {
    int n=0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    sumaAritmetica(n);

    return 0;
}//creo que el 'while' es la mejor opción en este caso
