/*
Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e
de acordo com a tabela abaixo cada um teria uma pontuação:
- Bola Verde: 10 pontos
- Bola amarela: 5 pontos
- Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do
participante.
*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v,a,b;
	
	printf("Digite o número de bolas verdes:");
	scanf("%d",&v);
	v=v*10;
	
	printf("Digite o número de bolas amarelas:");
	scanf("%d",&a);
	a=a*5;
	
	printf("Digite o numero de bolas brancas:");
	scanf("%d",&b);
	b=b*3;
	
	printf("Sua pontuação final foi de %d.",(v+a+b));


	return 0;
}
