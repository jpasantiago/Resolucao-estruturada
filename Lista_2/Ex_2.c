#include <stdio.h>
#include <conio.h>

//2 - Escreva um procedimento que leia seu nome e ap�s a leitura e 
//exiba o nome lido. Este procedimento dever� ser chamado atrav�s do programa principal.

void exibir_nome(){
	
	char nome[50];
	printf("Informe o seu nome: ");
	scanf("%s", nome);
	printf("Nome lido: %s", nome);
}

void main(){
	exibir_nome();
}
