#include <stdio.h>
#include <conio.h>

//5 - Escreva um procedimento que leia 4 números, após a leitura multiplique 
//todos e exibir o resultado. Este procedimento deverá ser chamado através do 
//programa principal.

int multiplicar_4_numeros(){
	
	int n1, n2, n3, n4, mult;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	printf("Informe um numero: ");
	scanf("%d", &n2);
	
	printf("Informe um numero: ");
	scanf("%d", &n3);
	
	printf("Informe um numero: ");
	scanf("%d", &n4);
	
	mult = n1 * n2 * n3 * n4 ;
	
	printf("A multiplicacao e: %d", mult);
}

void main(){
	multiplicar_4_numeros();
}
