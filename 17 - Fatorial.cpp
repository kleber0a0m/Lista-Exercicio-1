/*
 Calcular o fatorial de um número informado.
*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,y=1,i=0;
	printf("Digite um número:");
	scanf("%d",&x);

	for(i=x; i>0; i--){
		y=y*i;
	}
	
	printf("\n%d",y);
	return 0;
	
}
