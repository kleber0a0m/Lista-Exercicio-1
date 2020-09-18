/*
Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel
que faz N Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média
da viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ? TEMPO *
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula: LITROS_USADOS ? DISTANCIA /N. O programa em C deverá apresentar os valores da
distância percorrida e a quantidade de litros utilizados na viagem.
*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float tempo,velocidade, litros, distancia;
	printf("Tempo gasto na viagem:");
	scanf("%f",&tempo);
	
	printf("\nVelocidade média:");
	scanf("%f",&velocidade);
	
	printf("\nSeu veículo faz quantos Km/L?");
	scanf("%f",&litros);
	
	distancia = velocidade * tempo;
	
	printf("\n\nDistância percorrida: %.2f",distancia);
	printf("\nLitros utilizados na viagem: %.2f",distancia/litros);	
	
	
	

	
	
	return 0;
}
