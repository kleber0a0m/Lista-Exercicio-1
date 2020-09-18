/*
Construa um programa em C que determine (imprima) se um dado número N inteiro (recebido através do
teclado) é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2)).
*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número:\n");
	scanf("%d",&n);
	
	if(n%2 == 0){
		printf("\n%d é par.",n);
	}else{
		printf("\n%d é impar.",n);		
	}

	return 0;
}
