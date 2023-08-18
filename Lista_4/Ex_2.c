#include <stdio.h>
#include <conio.h>

//2 - Escreva uma função que leia 4 números, após a leitura multiplique todos e retorne o resultado. 
//Está função deverá ser chamada através do programa principal. Exibir conteúdo retornado.


int multiplicar_4_numeros(){
	
	int n1, n2, n3, n4, mult;
	
	printf("Informe um Numero: ");
	scanf("%d", &n1);
	
	printf("Informe um Numero: ");
	scanf("%d", &n2);
	
	printf("Informe um Numero: ");
	scanf("%d", &n3);
	
	printf("Informe um Numero: ");
	scanf("%d", &n4);
	
	mult = n1 * n2 * n3 * n4;
	
	return mult;
	
}

void main(){
	int mult;
	
	mult = multiplicar_4_numeros();
	printf("O resultado e: %d", mult);

	
}
