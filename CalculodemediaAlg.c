#include <stdio.h>

int main (){
    float nota1,nota2,nota3 ;
    printf("Informe as Tres Notas : ");
    scanf("%f %f %f", &nota1,&nota2,&nota3);

    float media = ( nota1 + nota2 + nota3) / 3.0;
    if (media >= 7.0){
        printf("Aprovado por media %f\n",media);
    }
    else if (media >= 4.0) {
        float nota_final = (25 - 3 * media) / 2 ;
        printf("Prova final! precisa de : %.1f\n",nota_final);
    }
    else { printf("Reprovado por media %.1f\n",media);
    }
    return 0;

    }
