#include <stdio.h>
#include <conio.h>

//2 Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), 
//calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere 
//que não será descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2.

void main(){
	
	float compri, larg, altura, area, total_caixas;
	
	printf("\nInforme o comprimento da sua cozinha: ");
	scanf("%f", &compri);
	
	printf("\nInforme o Largura da sua cozinha: ");
	scanf("%f", &larg);
	
	printf("\nInforme o Altura da sua cozinha: ");
	scanf("%f", &altura);
	
	area = (compri * altura*2) + (larg * altura*2);
	
	
	total_caixas = area / 1.5;
	
	printf("\nA area e : %0.2f", area);
	printf("\nA quantidade de caixas e : %0.2f", total_caixas);
	
}
