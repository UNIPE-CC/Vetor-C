#include <stdio.h>

int main(){
	/*Escreva o programa em C que recebe um vetor de tamanho 8 e que inverte os valores presentes no vetor, de forma que o primeiro
elemento será o último, e o último será o primeiro. O segundo elemento será o penúltimo, e o penúltimo será o primeiro, e assim por diante*/

	int a[8] = {1,2,3,4,5,6,7,8};
	int i;
	
	for(i=0;i<8;i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
	for(i=7;i>=0;i--){
		printf("%d\t", a[i]);
	}
}