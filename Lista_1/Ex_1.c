#include <stdio.h>
#include <conio.h>
//1.	Escreva um programa para ler o raio de um c�rculo, calcular e escrever a sua �rea
//R2  = (3.14 * raio^2)

void main(){
	float raio, area;
	
	printf("\nInforme o Raio de um circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * raio *raio;
	printf("\nArea do circulo: %0.2f", area); 
}

