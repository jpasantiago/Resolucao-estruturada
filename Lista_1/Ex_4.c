#include <stdio.h>
#include <conio.h>

//4.[FOR] Escreva um algoritmo em que leia 20 números e imprima a 
//soma dos positivos e o total de números negativos. 

void main(){
	
	int i, num, cont_neg=0, total=0;
	
	for (i=1; i<=5; i++){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(num < 0){
			cont_neg++;
		}
		else{
			total += num;
		}
	}
	
	printf("\nA soma total dos numeros positivos e : %d", total);
	printf("\nA quantidade de numeros negativos e : %d", cont_neg);

}
