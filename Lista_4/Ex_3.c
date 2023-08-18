#include <stdio.h>
#include <conio.h>

//3 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 4 Notas
//3 - Multiplica��o de 2 N�mero
//4 - Divis�o de 2 N�mero
//5 - Sair

//O usu�rio dever� escolher qual op��o deseja executar. 
//Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
//Para cada op��o escolhida, o algoritmo dever� chamar a fun��o correspondente a op��o, ou seja, teremos no m�nimo 4 fun��es diferentes no algoritmo.
//Cada fun��o dever�o ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida. Retornar e exibir o resultado no programa principal.


#include <stdio.h>
#include <conio.h>

int calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcular Idade>>\n\n");
	printf("Informe o Ano Atual: ");
	scanf("%d", &aa);
	printf("Informe o Ano Nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	return idade;
}

float calcular_media(){
	float nota1, nota2, nota3, nota4, media;
	system("cls");
	printf("<<Calcular Media de 4 Numeros>>\n\n");
	printf("Informe a nota: ");
	scanf("%f", &nota1);
	printf("Informe a nota: ");
	scanf("%f", &nota2);
	printf("Informe a nota: ");
	scanf("%f", &nota3);
	printf("Informe a nota: ");
	scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) /4;
	return media;
}

int multiplicar_2_numeros(){
	int n1, n2, mult;
	system("cls");
	printf("<<Multiplicacao de 2 numeros>>\n\n");	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe um numero: ");
	scanf("%d", &n2);
	mult = n1 * n2;
	return mult;
}

float dividir_2_numeros(){
	float n1, n2, div;
	system("cls");
	printf("<<divisao de 2 numeros>>\n\n");	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe um numero: ");
	scanf("%f", &n2);
	div = n1 / n2;
	return div;
}

void menu(){
	int opcao, idade, mult;
	float media, div;
	do{
		system("cls");
		printf("Menu de Opcoes: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 4 Notas");
		printf("\n3 - Multiplicacao de 2 Numero");
		printf("\n4 - Divisso de 2 Numero");
		printf("\n5 - Sair");
		printf("\nInforme uma opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				idade = calcular_idade();
				printf("Idade: %d", idade);
				break;
			case 2:
				media = calcular_media();
				printf("Media: %f", media);
				break;
			case 3:
				mult = multiplicar_2_numeros();
				printf("Media: %d", mult);
				break;
			case 4:
				div = dividir_2_numeros();
				printf("Media: %0.2f", div);
				break;
			case 5:
				printf("\n\nPrograma finalizado!!");
				break;
			default:
				system("cls");
				printf("Opcao invalida!!!");
		}
		printf("\n\n");
		system("pause");
	}while(opcao != 5);
}


void main(){
	menu();	
}
