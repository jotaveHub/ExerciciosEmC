#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Informe os tres lados: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo eh equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo eh isosceles\n");
    } else {
        printf("O triangulo eh escaleno\n");
    }

    return 0;
}
