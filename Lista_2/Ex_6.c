#include <stdio.h>
#include <conio.h>

//6 - Escreva um procedimento que lei 3 números e ao final subtraia o primeiro 
//do segundo e dívida o resultado pelo terceiro. Fazer a chamada no programa principal

int exibir_subtracao_e_divisao_de_3_numeros(){
	
	int n1, n2, n3;
	float div, sub;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	printf("Informe um numero: ");
	scanf("%d", &n2);
	
	printf("Informe um numero: ");
	scanf("%d", &n3);
	
	sub = (n1 - n2);
	div = sub / n3;
	
	printf("\nA subtracao dos dois primeiros numeros e: %0.2f", sub);
	printf("\nA Divisao do resultado da subtracao e: %0.2f", div);
}

void main(){
	exibir_subtracao_e_divisao_de_3_numeros();
}
