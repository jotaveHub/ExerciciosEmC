/*Escreva um programa que leia um n�mero inteiro N e verifique se ele � um n�mero primo.*/

#include <stdio.h>

int main () {
    int num, z;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    int divisores=0;
    for(z =1 ; z <= num ; z++) {
        if(num % z == 0) {
            divisores++;
        }
    }
    if(divisores == 2){
        printf("%d eh um numero primo.\n",num);
    }
    else {
        printf("%d NAO eh um numero primo.\n",num);
    }
    
    return 0;
}
