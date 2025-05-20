/*
Quest�o 49:

Uma revendedora de ve�culos resolveu fazer uma promo��o em seus ve�culos. Nesta
revendedora, o pre�o de um ve�culo � calculado atrav�s do seu pre�o de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promo��o, a revendedora resolveu tirar o valor do IPI. Com base nestas informa��es,
escreva um programa que leia o pre�o atual de um ve�culo e calcule qual deve ser o
seu pre�o na promo��o.

valor original do ve�culo = x
valor atual do ve�culo = x + x*0.2 + x*0.17 + x*0.2
x * (1 + 0.2 + 0.17 + 0.2) = valor atual do ve�culo
x = valor_atual / 1.57

valor na promo��o = valor atual sem a taxa de IPI
valor atual sem a taxa de IPI = valor_atual - x*0.2
*/

#include <stdio.h>
#include <conio.h>

void main () {
	float preco_compra,preco_atual,preco_promocional;
	printf("Informe o valor atual do veiculo:");
	scanf("%f",&preco_atual);
	
	preco_compra = preco_atual / 1.57;
	preco_promocional = preco_compra * 1.20;
	
	printf("O valor do veiculo na promocao deve ser : R$ %.2f\n",preco_promocional);
	getch();
}
