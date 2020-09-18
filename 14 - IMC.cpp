/*
Construa um programa em C para determinar se o indivíduo está com um peso favorável. Essa situação é
determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indivíduo. Ou seja,
e, a situação do peso é determinada pela tabela abaixo:
*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, peso, imc;

	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	imc = peso / ( pow(altura,2) );
	
	printf("Seu IMC é %.2f.\n\n",imc);
	
	if(imc < 20){
		printf("Abaixo do peso.");
	}else if(imc>= 20 && imc<25){
		printf("Peso normal.");
	}else if(imc>=25 && imc<30){
		printf("Sobre Peso.");
	}else if(imc>=30 && imc<40){
		printf("Obeso.");
	}else if(imc>=40){
		printf("Obeso Mórbido.");
	}
	
	
	
	return 0;
	
}
