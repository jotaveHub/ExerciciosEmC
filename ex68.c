//Escreva um programa que leia o valor do sal�rio bruto de um empregado e calcule o seu sal�rio l�quido. Para calcular o valor do sal�rio l�quido, deve-se primeiramente descontar uma taxa de 11%, correspondente ao valor da contribui��o previdenci�ria. Depois, do valor restante, deve-se descontar o valor do imposto de renda, que varia de acordo com o valor do sal�rio. O percentual que deve ser descontado para o imposto de renda varia de acordo com a tabela abaixo.

//salario liquido = salario bruto * 0.89

// desconto imposto de renda = 
/*Sal�rio Al�quota at� 1.903,98
Isento 1.903,99.
at� 2.826,65 7,5.
de 2.826,66 at� 3.751,05 15%.
de 3.751,06 at� 4.664,68 22,5%.
 a partir de 4.664,69
27,5%.*/

#include <stdio.h>

int main() {
    float salario_bruto, salario_apos_inss, salario_liquido;
    float desconto_inss = 0.89;
    float imposto_renda;

    printf("Informe o seu salario bruto: ");
    scanf("%f", &salario_bruto);

    // Desconto da contribui��o previdenci�ria (INSS)
    salario_apos_inss = salario_bruto * desconto_inss;

    // C�lculo do IR conforme faixas (valores com base na tabela antiga para 2023)
    if (salario_apos_inss <= 1903.98) {
        // Isento de IR
        salario_liquido = salario_apos_inss;
        printf("Isento de IR. Salario liquido: R$ %.2f\n", salario_liquido);
    }
    else if (salario_apos_inss <= 2826.65) {
        // 7,5% de IR
        salario_liquido = salario_apos_inss * 0.925;
        printf("Desconto de IR (7,5%%). Salario liquido: R$ %.2f\n", salario_liquido);
    }
    else if (salario_apos_inss <= 3751.05) {
        // 15% de IR
        salario_liquido = salario_apos_inss * 0.85;
        printf("Desconto de IR (15%%). Salario liquido: R$ %.2f\n", salario_liquido);
    }
    else if (salario_apos_inss <= 4664.68) {
        // 22,5% de IR
        salario_liquido = salario_apos_inss * 0.775;
        printf("Desconto de IR (22,5%%). Salario liquido: R$ %.2f\n", salario_liquido);
    }
    else {
        // 27,5% de IR
        salario_liquido = salario_apos_inss * 0.725;
        printf("Desconto de IR (27,5%%). Salario liquido: R$ %.2f\n", salario_liquido);
    }

    return 0;
}
