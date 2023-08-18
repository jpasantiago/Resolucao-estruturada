#include <stdio.h>
#include <conio.h>

//2. Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.

int calcular_idade(aa, an){
	int idade;
	idade= aa - an;
	return idade;
}

void main(){
	int aa, an, idade;
	printf("<<Calcular idade>>");
	printf("\nInforme o ano atual: ");
	scanf("%d", &aa);
	printf("\nInforme o ano de nascimento: ");
	scanf("%d", &an);
	idade = 	calcular_idade(aa, an);
	printf("\nsoma: %d", idade);
}
