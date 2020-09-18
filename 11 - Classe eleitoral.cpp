/*
Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
- não eleitor (abaixo de 16 anos);
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).
*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
	if(idade<16){
		printf("\nNão Eleitor.");
	}else if( (idade>=16 && idade<18) || (idade>=65)){
		printf("Eleitor Facultativo.");
	}else if(idade>=18 && idade<65){
		printf("Eleitor Obrigatório");
	}

	return 0;
}
