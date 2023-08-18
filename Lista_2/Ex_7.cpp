#include <stdio.h>
#include <conio.h>

//7 - Escreva um procedimento que ao realizar a leitura de um número qualquer, 
//seja capaz de verificar se o mesmo é positivo ou negativo. Fazer a chamada 
//no programa principal.

int positivo_ou_negativo(){
	int n1;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	if( n1 > 0){
		printf("O numero e possitivo");
	}
	else
		if(n1 > 0){
			printf("O numero e Neutro");
		}
		
		else{
			printf("O numero e Negativo");
		}
			
		
	
}

void main(){
	
	positivo_ou_negativo();
}
