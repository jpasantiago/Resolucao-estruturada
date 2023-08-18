#include <stdio.h>
#include <conio.h>

//6. Escreva um programa que leia as notas das duas avaliações. 
//Calcular a média do semestre considerando exibindo o resultado abaixo:

//Aprovado: media >= 7.0
//Reprovado: media < 3.0
//Exame: media >= 3.0 e < 7.0

void main(){
	
	float nota1, nota2, media;
	
	printf("Informe a nota um: ");
	scanf("%f", &nota1);
	printf("Informe a nota dois: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 7){
		printf("Aprovado");
	}
	else{
		if(media < 3){
			printf("Reprovado");
		}
		else{
			if(media >= 3 || media < 7)}
			printf("Exame");
		}
	}
	
	
	
}
