#include <stdio.h>

int main(){
/*Crie um programa que calcula a soma dos valores de um vetor de tamanho 10 e mostra a soma ao final. Os valores são lidos do teclado*/
	
	int a[10], soma=0;
	int i;
	
	for(i=0;i<10;i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &a[i]);
		soma+=a[i];
	}
	printf("Total %d", soma);
}