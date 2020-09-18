/*
 Escrever a tabuada de multiplicação do um número lido na tela.
*/
#include<stdio.h>
	int main()
	{
		int tabuada = 0, i=0;

		printf("Qual tabuada voce quer?\n");
		scanf("%d",&tabuada);

		printf("\nMostrando Tabudada do %d ",tabuada);


		for(i=0; i<11; i++){

		
			printf("\n\n%d x %d = %d",tabuada,i,(tabuada * i));

			
			}		
		}
