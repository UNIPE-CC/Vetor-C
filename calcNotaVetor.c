#include <stdio.h>

int main(){
/*Considere um software para guardar as notas de um aluno do ensino médio, que está dividida em 4 unidades e ainda possui a média final. 
O programa pergunta qual a disciplina que terá as notas cadastradas (1- álgebra, 2-geometria, 3-português e 4-história), e depois lê as 4 notas
do aluno (com 1 casa decimal). Os valores devem ficar salvos num vetor em que o primeiro campo é a número da disciplina, os 4 campos seguintes 
são as notas nas 4 unidades, e o último campo é a média das notas. O programa calcula a média e salva na última célula do vetor,
depois mostra o nome da disciplina, as notas tiradas em cada unidade e a média final, dizendo se o aluno foi aprovado (se a média for maior ou igual a 7) ou se não foi*/

	float notas[6], soma=0, media;
	int i, op;
	
	printf("Cadastrar notas \n");
	printf("1 - Algebra\n2 - Geometria\n3 - Portugues\n4 - Historia\nOpcao:  ");
	scanf("%d", &op);
		
	switch(op){
		case 1:
			notas[0] = 1;
			printf("Insira as notas \n");
			for(i=1;i<5;i++){
				printf("nota %d: ", i);
				scanf("%f", &notas[i]);
				soma+=notas[i];
			}
			media = soma/4;
			notas[5] = media;
			
			printf("%.0f - Algebra\n", notas[0]);
			for(i=1;i<5;i++){
				printf("nota %.1f\n", notas[i]);
			}
			printf("Media %.1f\n", notas[5]);
			
			if(media >= 7)
				printf("APROVADO\n");
			else
				printf("REPROVADO\n");
			break;
			
		case 2:
			notas[0] = 2;
			printf("Insira as notas \n");
			for(i=1;i<5;i++){
				printf("nota %d: ", i);
				scanf("%f", &notas[i]);
				soma+=notas[i];
			}
			media = soma/4;
			notas[5] = media;
			
			printf("%.0f - Geometria\n", notas[0]);
			for(i=1;i<5;i++){
				printf("nota %.1f\n", notas[i]);
			}
			printf("Media %.1f\n", notas[5]);
			
			if(media >= 7)
				printf("APROVADO\n");
			else
				printf("REPROVADO\n");
			break;
			
		case 3:
			notas[0] = 3;
			printf("Insira as notas \n");
			for(i=1;i<5;i++){
				printf("nota %d: ", i);
				scanf("%f", &notas[i]);
				soma+=notas[i];
			}
			media = soma/4;
			notas[5] = media;
			
			printf("%.0f - Portugues\n", notas[0]);
			for(i=1;i<5;i++){
				printf("nota %.1f\n", notas[i]);
			}
			printf("Media %.1f\n", notas[5]);
			
			if(media >= 7)
				printf("APROVADO\n");
			else
				printf("REPROVADO\n");
			break;
			
		case 4:
			notas[0] = 4;
			printf("Insira as notas \n");
			for(i=1;i<5;i++){
				printf("nota %d: ", i);
				scanf("%f", &notas[i]);
				soma+=notas[i];
			}
			media = soma/4;
			notas[5] = media;
			
			printf("%.0f - Historia\n", notas[0]);
			for(i=1;i<5;i++){
				printf("nota %.1f\n", notas[i]);
			}
			printf("Media %.1f\n", notas[5]);
			
			if(media >= 7)
				printf("APROVADO\n");
			else
				printf("REPROVADO\n");
			break;
				
		default:
			printf("op invalida");
			break;
	}
}