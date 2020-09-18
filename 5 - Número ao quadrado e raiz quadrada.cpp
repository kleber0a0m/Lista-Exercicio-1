/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado • A raiz quadrada do número digitado*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	
	printf("Digite um número:");
	scanf("%f",&n);
	
	if(n>=0){
		printf("\n%.3f² é %.3f.",n,(n*n));
		printf("\nA raiz quadrada de %.3f é %.3f.",n,sqrt(n));
	}else{
		printf("\n%.3f é um número menor que 0.",n);
	}
	
	
	return 0;
}
