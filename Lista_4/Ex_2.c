#include <stdio.h>
#include <conio.h>

//2 - Escreva uma fun��o que leia 4 n�meros, ap�s a leitura multiplique todos e retorne o resultado. 
//Est� fun��o dever� ser chamada atrav�s do programa principal. Exibir conte�do retornado.


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
