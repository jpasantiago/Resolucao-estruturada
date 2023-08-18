#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto 
//e imprima na tela a região de sua procedência conforme a tabela abaixo:

//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste

//Observação: Caso o código não seja nenhum dos especificados o produto deve ser encarado como Importado.

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


