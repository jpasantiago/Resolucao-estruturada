#include <stdio.h>
#include <conio.h>

//4.Escreva uma fun��o que receba a Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea.

float calcular_area(float largura, float comprimento){
	float area;
	area = largura * comprimento;
	return area;
}

void main(){
	float largura, comprimento, area;
	printf("<<Calcula a area>>");
	printf("\nInforme a largura: ");
	scanf("%f", &largura);
	printf("\nInforme a comprimento: ");
	scanf("%f", &comprimento);
	area = calcular_area(largura, comprimento);
	printf("\nArea: %0.2f", area);
}
