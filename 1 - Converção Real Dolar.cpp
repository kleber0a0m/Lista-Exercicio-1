/*Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float real, dolar,x;
	
	printf("Qual a cotação do dolar? \n");
	scanf("%f",&dolar);
	
	printf("Quantos reais você tem? \n");
	scanf("%f",&real);
	
	x= real/dolar;
	
	printf("\n\nCom o dolar valendo R$%.2f você pode comprar US$%.2f dolares com seus R$%.2f reais.",dolar,x,real);
	
	return 0;
}
