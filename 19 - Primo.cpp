/*
Crie um programa em C que leia um valor e informe se ele � primo. Um n�mero primo � divis�vel s� por 1 e ele mesmo.
*/
#include<stdio.h>
#include<locale.h>
	int main()
	{
	setlocale(LC_ALL, "Portuguese");
		int n,i,cont=0;

		printf("Digite um n�mero:\n");
		scanf("%d",&n);

		for(i=1; i<=n; i++){
				if(n%i==0){
					cont++;
				}
			}	
		
		if(cont == 2 || n == 1){
			printf("%d � primo.",n);
		}else{
			printf("%d n�o � primo.",n);			
		}
	}
