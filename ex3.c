#include <stdio.h>
#include <conio.h>

void main(){
	int ano;
	printf("Informe o ano:");
	scanf("%d",&ano);
	
	if ((ano%400 ==0) || ((ano%4 ==0) && (ano%100 !=0))) {
		printf("%d eh um ano bissexto.\n",ano);
	}
	else {printf("%d nao eh um ano bissexto\n",ano);
	}
	getch ();
}
