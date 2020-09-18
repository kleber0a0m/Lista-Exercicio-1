/*
Você foi encarregado para desenvolver um programa com objetivo de armazenar os pontos do campeonato
interno de futebol do IFSULDEMINAS, assim seu programa deve receber o nome e os gols de dois times, e
apresentar a pontuação que cada um deve receber pelo jogo, levando-se em consideração que uma vitória
dá 3 pontos, empate 1 ponto e derrota 0 ponto.
*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

struct equipe{
	char nome[100];
	int gols = 0;
	int vitorias= 0;
	int empates = 0;
	int derrotas = 0;
	int pontos = 0;
	
};

typedef struct equipe Time;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Time time[2];
	
	
	printf("Digite o nome do %dº time: ",1);
	setbuf(stdin, NULL);
	gets(time[0].nome);
	
	printf("\nDigite quantos gols o %s fez no jogo: ",time[0].nome);
	scanf("%d",&time[0].gols);
	
	
	printf("\n\nDigite o nome do %dº time: ",2);
	setbuf(stdin, NULL);
	gets(time[1].nome);
	
	printf("\nDigite quantos gols o %s fez no jogo: ",time[1].nome);
	scanf("%d",&time[1].gols);
	
	
	if(time[0].gols == time[1].gols){
		time[0].empates++;
		time[0].pontos += 1;
		
		time[1].empates++;
		time[1].pontos += 1;
		
		printf("\n\n==========Pontução Final==========\n");
		printf("Ocorreu um empate entre %s e %s.", time[0].nome,time[1].nome);
		printf("\n==================================");
	}else if (time[0].gols < time[1].gols){
		time[0].derrotas++;
		time[0].pontos += 0;
		
		time[1].vitorias++;
		time[1].pontos += 3;
		
		printf("\n\n==========Pontução Final==========\n");
		printf("O time %s foi o vencedor.", time[1].nome);
		printf("\n==================================");
	}else if (time[0].gols > time[1].gols){
		time[0].vitorias++;
		time[0].pontos += 3;
		
		time[1].derrotas++;
		time[1].pontos += 0;
		printf("\n\n==========Pontução Final==========\n");
		printf("O time %s foi o vencedor.", time[0].nome);
		printf("\n==================================");
	}
	
	


	printf("\n\n==================================");
	printf("\nNOME: %s",time[0].nome);
	printf("\nVITÓRIAS: %d",time[0].vitorias);
	printf("\nDerrotas: %d",time[0].derrotas);
	printf("\nPONTOS: %d",time[0].pontos);
	printf("\n==================================");	
	printf("\n\n==================================");
	printf("\nNOME: %s",time[1].nome);
	printf("\nVITÓRIAS: %d",time[1].vitorias);
	printf("\nDerrotas: %d",time[1].derrotas);
	printf("\nPONTOS: %d",time[1].pontos);
	printf("\n==================================");
	

	return 0;
	
}
