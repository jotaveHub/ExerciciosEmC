#include <stdio.h>
#include <conio.h>
const float m2 = 300;

void main () {
	float comprimento,largura;
	printf("Informe o comprimento em metros:");
	scanf("%f",&comprimento);
	printf("Informe a largura em metros:");
	scanf("%f",&largura);
	
	float area_total = comprimento * largura;
	float valor_final = area_total * m2;
	printf("O valor final de mercado do terreno eh: %.f\n",valor_final);
	getch ();
}
