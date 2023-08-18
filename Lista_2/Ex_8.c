#include <stdio.h>
#include <conio.h>
//8 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//Calcular IdadeCalcular Idade
//1 - nCalcular Idade 
//2 - Média de 3 Notas
//3 - Maior Número
//4 - Menor Número
//5 - Sair

//O usuário deverá escolher qual opção deseja executar. 
//Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de 
//advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
//Para cada opção escolhida, o algoritmo deverá chamar o procedimento correspondente a opção, 
//ou seja, teremos no mínimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento deverá ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida.

void menu(){
	int opcao;
	do{
		system("cls");
		printf("Informe a Opcao: ");
		printf("\n1 - nCalcular Idade: ");
		printf("\n2 - Média de 3 Notas: ");
		printf("\n3 - Maior Número: ");
		printf("\4 - Menor Número: ");
		printf("\5 - Sair: ");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao)
	 	{
	    	case 1:
	       		calcular_idade();
	       		break;
	       		
	    	case 2:
	       		calcular_media_de_3_numeros();
	       		break;
	       		
	       	case 3:
	       		maior_numero();
	       		break;
	       		
	    	case 4:
	       		menor_numero();
	       		break;
	       		
	       	case 5:
	       		printf("sair");
	       		break;	
	 	}
	} while(opcao != 5)	;
}

int calcular_idade(){
	int anoatual, anon, idade;
	
	printf("Informe o Ano Atual: ");
	scanf("%d", &anoatual);
	
	printf("Informe o ano Do Nascimento: ");
	scanf("%d", &anon);
	
	idade = anoatual - anon;
	
	printf("A sua Idade e: %d", idade);
}

int calcular_media_de_3_numeros(){
	float n1, n2, n3, media;
	
}
void main(){
	menu();
}
