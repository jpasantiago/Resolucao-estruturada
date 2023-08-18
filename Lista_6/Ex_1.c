#include <stdio.h>
#include <conio.h>

//1.	Escreva uma função, que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores.

int calcular_somar(int a, int b){
	int soma;
	soma = a + b;
	return soma;
}

void main(){
	int a, b, soma;
	printf("<<Somar Dois valores>>");
	printf("\nInforme um numero: ");
	scanf("%d", &a);
	printf("\nInforme um numero: ");
	scanf("%d", &b);
	soma = 	calcular_somar(a, b);
	printf("\nsoma: %d", soma);
	
}
