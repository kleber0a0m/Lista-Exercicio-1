/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7
 e imprima o dia da semana correspondente a este número. Isto e,
 domingo se 1, segunda-feira se 2, e assim por diante.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Número inteiro: \n");
	scanf("%d",&n);
	
	switch (n){
	case 1:
	    printf("\n%d corresponde ao domingo",n);
	break;
	case 2:
	    printf("\n%d corresponde à segunda-feira",n);
	break;
	case 3:
	    printf("\n%d corresponde à terça-feira",n);
	break;
	case 4:
	    printf("\n%d corresponde à quarta-feira",n);
	break;
	case 5:
	     printf("\n%d corresponde à quinta-feira",n);
	break;
	case 6:
	     printf("\n%d corresponde à sexta-feira",n);
	break;
	case 7:
	    printf("\n%d corresponde ao sabado",n);
	break;
	default:
        printf("\n%d não corresponde à nenhum dia da semana",n);
    break;
	
	}

	
	return 0;
}
