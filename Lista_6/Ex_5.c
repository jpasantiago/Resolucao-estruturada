#include <stdio.h>
#include <conio.h>

//5.Escreva uma função que recebe a idade de um nadador por parâmetro e 
//retorna à categoria desse nadador de acordo com a tabela abaixo:   

//Idade			Categoria
//5 a 7 anos		1
//8 a 10 anos		2
//11-13 anos		3
//14-17 anos		4
//>= 18 anos		5

int acha_categoria_por_idade(int idade){
	int categoria;
	switch (idade){
		case 5 ... 7:
			categoria = 1;
			break;
		case 8 ... 10:
			categoria = 2;
			break;
		case 11 ... 13:
			categoria = 3;
			break;
		case 14 ... 17:
			categoria = 4;
			break;
		case 18 ... 200:
			categoria = 5;
			break;
		default:
			categoria = 0;
			break;
	}
	return categoria;
}

void main(){
	int idade, categoria;
	printf("<<Informa a categoria por Idade>>");
	printf("\nInforme a Sua Idade: ");
	scanf("%d", &idade);
	categoria = acha_categoria_por_idade(idade);
	printf("\nCategoria: %d", categoria);
}

