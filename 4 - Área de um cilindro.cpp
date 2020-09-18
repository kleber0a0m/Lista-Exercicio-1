/*Faça um programa para calcular a área de um cilindro dada sua formula.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a,pi,r,h;
	pi=3.14159;
	printf("Digite o raio do cilindro:");
	scanf("%f",&r);
	
	printf("Digite o altura do cilindro:");
	scanf("%f",&h);
	
	a=2*pi*r*(r+h);
	
	printf("A área do cilindro é %.4f",a);
	
	
	return 0;
}
