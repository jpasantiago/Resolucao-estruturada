#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto 
//e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:

//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste

//Observa��o: Caso o c�digo n�o seja nenhum dos especificados o produto deve ser encarado como Importado.

void main(){
	int cod;
	
	printf("Informe o codigo do produto: ");
	scanf("%d", &cod);
	
	switch (cod)
 	{
    	case 1:
       		printf("\nA sua procedencia e Sul");
       		break;
       		
    	case 2:
       		printf("\nA sua procedencia e Norte ");
       		break;
       		
       	case 3:
       		printf("\nA sua procedencia e Leste ");
       		break;
       		
    	case 4:
       		printf("\nA sua procedencia e Oeste ");
       		break;
       		
       	case 5:
       		printf("\nA sua procedencia e Nordeste ");
       		break;
       		
    	case 6:
       		printf("\nA sua procedencia e Nordeste");
       		break;
       		
       	case 7:
       		printf("\nA sua procedencia e Sudeste");
       		break;
       		
    	case 8:
       		printf("\nA sua procedencia e Sudeste");
       		break;
       		
       	case 9:
       		printf("\nA sua procedencia e Sudeste");
       		break;
       		
    	case 10:
       		printf("\nA sua procedencia e Centro-Oeste");
       		break;
       		
       	case 11:
       		printf("\nA sua procedencia e Noroeste");
       		break;	
    	
    	default:
       		printf("\nProduto importado");
       		break;
 	}


}


