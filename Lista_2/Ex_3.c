#include <stdio.h>
#include <conio.h>

//3 - Escreva um procedimento que leia seu nome e em uma segunda vari�vel leia 
//seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome. 
//Este procedimento dever� ser chamado atrav�s do programa principal

void exibir_nome_e_sobrenome(){
	
	char nome[50], sobrenome[50];
	
	printf("Informe o seu nome: ");
	scanf("%s", nome);
	printf("Informe o seu sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Nome lido: %s %s", nome, sobrenome);
}

void main(){
	exibir_nome_e_sobrenome();
}
