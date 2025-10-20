#include <stdio.h>

int main(){
	/*Escreva o programa que percorre todo um vetor de tamanho 7 e que altera os valores presentes em cada uma de suas células.
Cada célula vai receber o valor da célula atual somado ao valor da célula que vem imediatamente após ela. A única exceção será a
última célula deve ser somada ao valor da primeira célula. Depois imprima todos os valores do vetor*/

	int a[7] = {1,2,3,4,5,6,7};
	int i;
	int gamb = a[0];
	
	for(i=0;i<7;i++){
		printf("%d\n", a[i]);
	}
	
	for(i=0;i<7;i++){
		if(i == 6){
			a[i]+=gamb;
		}else{
			a[i]+=a[i+1];
		}
		printf("%d\n", a[i]);
	}
}