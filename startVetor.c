#include <stdio.h>

int main(){
	/*Escreva o programa em C que cria um vetor de 8 elementos e lê do teclado cada um dos números que vai ser salvo dentro deste
vetor. Depois o programa imprime cada um dos valores usando um for, com frases do tipo: “O 1° elemento é: XX”, “O 2° elemento é:
YY” em que o número do elemento e o conteúdo devem ser manipulados no for*/

	int a[8], i,cont=0;
	
	for(i=0;i<8;i++){
		printf("Valor: ");
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<8;i++){
		cont=i+1;
		printf("O %d elemento e: %d\n", cont, a[i]);
	}
}