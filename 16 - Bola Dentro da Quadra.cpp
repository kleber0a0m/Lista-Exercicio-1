/*
Uma quadra de t�nis tem o formato de um ret�ngulo, cujos lados medem 36 p�s por 78 p�s, que correspondem a um
ret�ngulo de 432 polegadas por 936 polegadas. No �ltimo Grand Slam da Austr�lia, Rafael Nadal perdeu para Novak
Djokovi num dos jogos mais bonitos de t�nis dos �ltimos tempos. Muitas vezes, uma jogada � t�o r�pida, e a bola t�o
pr�xima da borda da quadra, que o juiz pode tomar uma decis�o que pode ser contestada por um dos jogadores.
Para isso, existe o tira-teima, que utiliza a imagem gravada do jogo para decidir se a bola estava dentro ou fora da
metade da quadra correspondente a um dos jogadores. Considere que a semi-quadra de Rafael Nadal corresponde a
um ret�ngulo em que dois v�rtices t�m coordenadas (0,0) e (432, 468), onde todos os n�meros s�o em polegadas.
Voc� deve escrever um programa para, dadas as coordenadas (X, Y) do ponto de contato da bola com o solo,
determinar se uma bola bateu no solo dentro ou fora da semi-quadra. Note que se a bola bate na linha divis�ria ela �
considerada uma bola dentro.
Entrada A entrada � dada em uma �nica linha, que cont�m dois inteiros X e Y, que correspondem �s coordenadas
do ponto (X, Y) de contato da bola com o solo, em polegadas.
Sa�da Seu programa deve imprimir uma �nica linha, contendo a palavra dentro se a bola bateu dentro da semi-
quadra, e a palavra fora caso contr�rio.
Exemplos
Entrada
-2 200
Sa�da
fora
Entrada
432 10
Sa�da
dentro
*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	

	if(x>=0 && x<=432 && y>=0 && y<=468){
		printf("Dentro.");
	}else{
		printf("Fora.");
	}

	return 0;
	
}
