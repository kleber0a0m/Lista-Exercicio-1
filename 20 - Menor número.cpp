/*
Construa um programa para que: Dado um conjunto de valores inteiros e positivos, digitados pelo usuário,
determinar qual o menor valor do conjunto. O algoritmo deve imprimir o valor determinado. Quando o
usuário decidir que finalizou a entrada de dados, ele deve digitar –1, e este dado não deve ser considerado.
*/
#include<stdio.h>
#include<locale.h>
	int main()
	{
	setlocale(LC_ALL, "Portuguese");
		int n,menor;
		scanf("%d",&n);
		menor = n;
		while(n!=-1){
			if(n < menor){
				menor = n;
			}
			
			scanf("%d",&n);

			

		}
		
		printf("O menor número digitado foi %d.",menor);
	}
