#include <stdio.h>
int contadorDigitos(int num) {
    int cont = 0;
    
    while (num != 0) {
        num /= 10;
        cont++;
    }
    
    return cont;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    printf("El número %d tiene %d dígitos\n", numero, contadorDigitos(numero));
    
    return 0;
}//creo que el 'while' es la mejor opción en este caso
