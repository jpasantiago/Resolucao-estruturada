#include <stdio.h>
#include <conio.h>

//1 - Escreva uma fun��o que leia 2 n�meros, ap�s a leitura somar e retornar o resultado. 
//Est� fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.

int somar_dois_numeros(){
	
	int n1, n2, soma;
	printf("Informe um numeor: ");
	scanf("%d", &n1);
	
	printf("Informe um numeor: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	return soma;
}

void main(){
	int soma;
	soma = somar_dois_numeros();
	printf("A soma e: %d", soma);
}
