#include <stdio.h>
int productoGeometrica(int num){
    double producto = 1;
    double base = 2;
    
    int i = 0;
    while (i < num) {
        producto *= base;
        printf("%.0lf", producto);
        if (i != num - 1) {
            printf(", ");
        }
        base *= 2;
        i++;
    }
}
int main() {
    int n = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    productoGeometrica(n);


    return 0;
}