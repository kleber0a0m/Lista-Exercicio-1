/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de fábrica de um carro e escreva o custo
ao consumidor.
*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custof;
	
	printf("Digite o custo de fábrica:\n");
	scanf("%f",&custof);
	
	custof = custof + (custof*0.25) + (custof * 0.42);
	
	printf("Custo ao consumidor é de  %.2f\n",custof);
	
	return 0;
}
