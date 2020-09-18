/*Faça um programa que receba dois números e mostre qual deles é o maior.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2;
	
	printf("Digite um número:");
	scanf("%f",&n1);
	
	printf("\nDigite outro número:");
	scanf("%f",&n2);
	
	if(n1>n2){
		printf("\n%.3f é maior que %.3f",n1,n2);
	}else if(n2>n1){
		printf("\n%.3f é maior que %.3f",n2,n1);	
	}else{
		printf("\n%.3f é %.3f são iguais",n1,n2);
	}
	
	
	
	
	return 0;
}
