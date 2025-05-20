//Escreva um programa que leia o valor de uma dist�ncia em metros e calcule o seu valor correspondente 
//em quil�metros, hect�metros, dec�metros, cent�metros, dec�metros e mil�metros.



#include <stdio.h>

int main() {
    float distancia;

    printf("Informe a dist�ncia (em metros): ");
    scanf("%f", &distancia);

    printf("\nConversoes:\n");
    printf("Quilometros (km): %.3f\n", distancia / 1000);
    printf("Hectometros (hm): %.3f\n", distancia / 100);
    printf("Decametros (dam): %.3f\n", distancia / 10);
    printf("Decimetros (dm): %.3f\n", distancia * 10);
    printf("Centimetros (cm): %.3f\n", distancia * 100);
    printf("Milimetros (mm): %.3f\n", distancia * 1000);

    return 0;
}

