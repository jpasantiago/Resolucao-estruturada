#include <stdio.h>
#include <conio.h>

//3.Escreva uma função que receba 2 parametros (Nota1 e Nota2) calcule e retorne a média.

float calcular_media_de_2_numeros(float nota1, float nota2){
	float media;
	media = (nota1 + nota2) / 2;
	return media;
}

void main(){
	float nota1, nota2, media;
	printf("<<Calcula a media de dois numeros>>");
	printf("\nInforme a Nota: ");
	scanf("%f", &nota1);
	printf("\nInforme a Nota: ");
	scanf("%f", &nota2);
	media = calcular_media_de_2_numeros(nota1, nota2);
	printf("\nMedia: %0.1f", media);	
}
