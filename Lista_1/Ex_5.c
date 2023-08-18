#include <stdio.h>
#include <conio.h>

//5.[FOR] Criar um algoritmo em que leia dez números inteiros e 
//imprima o maior e o segundo maior número da lista

void main(){
	
	int i, num, maior=0, seg_maior=0; 
	
	for (i=1; i<=5; i++){
		
		printf("Informe um numero: ");
		scanf("%d", &num);
		
		if(num > maior){
			seg_maior = maior;
			maior = num;	
		}
		else{
			if(maior > num &&  num > seg_maior){
				seg_maior = num;
			}
		}
	}
	printf("\no maior numero e: %d", maior);
	printf("\no segundo maior numero e: %d", seg_maior);
}
