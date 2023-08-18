#include <stdio.h>
#include <conio.h>

//4 - Escreva um procedimento que leia 2 números, após a leitura somar e 
//exibir o resultado. Este procedimento deverá ser chamado através do programa principal.


int somar_dois_numeros(){
	int n1, n2, soma;
	printf("Informe o numero: ");
	scanf("%d", &n1);
	
	printf("Informe o numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma dos numeros e: %d", soma);
}
void main(){
	somar_dois_numeros();
}
