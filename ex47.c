/*
Questão 47:

Um banco está realizando uma grande promoção em seus financiamentos. Ele financia
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do
valor do empréstimo. Os valores das demais prestações correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações,
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de
juros que o cliente vai pagar pelo empréstimo. 

20% => 20 / 100 = 0.2
107% => 107 / 100 = 1.07

pegar 20% de x =>  x * 0.2

tot_juros = tot - val_empr

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void main() {
    float p1, p2, p3, p4, p5;
    float vemprestimo, totalPago, totalJuros;
    
    scanf("%f", &vemprestimo);
    
    p1 = vemprestimo * 0.20;
    p2 = p1 * 1.07;
    p3 = p2 * 1.07;
    p4 = p3 * 1.07;
    p5 = p4 * 1.07;
    
    totalPago = p1 + p2 + p3 + p4 + p5;
    totalJuros = totalPago - vemprestimo;
    
    printf("Parcela 1: R$ %.2f\n", p1);
    printf("Parcela 2: R$ %.2f\n", p2);
    printf("Parcela 3: R$ %.2f\n", p3);
    printf("Parcela 4: R$ %.2f\n", p4);
    printf("Parcela 5: R$ %.2f\n", p5);
    
    printf("O total a ser pago pelo cliente eh: R$ %.2f\n", totalPago);
    printf("O total de juros a ser pago pelo cliente eh: R$ %.2f\n", totalJuros);
    
    getch();
}
