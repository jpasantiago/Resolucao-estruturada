#include <stdio.h>
#include <conio.h>
//8 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//Calcular IdadeCalcular Idade
//1 - nCalcular Idade 
//2 - M�dia de 3 Notas
//3 - Maior N�mero
//4 - Menor N�mero
//5 - Sair

//O usu�rio dever� escolher qual op��o deseja executar. 
//Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de 
//advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
//Para cada op��o escolhida, o algoritmo dever� chamar o procedimento correspondente a op��o, 
//ou seja, teremos no m�nimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento dever� ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida.

void menu(){
	int opcao;
	do{
		system("cls");
		printf("Informe a Opcao: ");
		printf("\n1 - nCalcular Idade: ");
		printf("\n2 - M�dia de 3 Notas: ");
		printf("\n3 - Maior N�mero: ");
		printf("\4 - Menor N�mero: ");
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
