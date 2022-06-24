#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 200
#define MAX 20
int codigo; // variavel globa

int main(void)
{
	FILE *pont_arq; //arquivo ponteiro para o arquivo
	int n,i,c;
	
	pont_arq = fopen("TABUADA.txt","a");
	
	if(pont_arq == NULL)
	{
		printf("Erro na leitura do arquivo!");
		return 1;
	}
	else
	{
		printf("Qual A Tabuada: ");
		scanf("%d",&n);
		while(n!=0)
		{
			fprintf(pont_arq,"---------------------------\n");
			printf("---------------------------\n");
			fprintf(pont_arq,"       TABUADA do %d      \n",n);
			printf("      TABUADA do %d       \n",n);
			printf("---------------------------\n");
			fprintf(pont_arq,"---------------------------\n");
			for (i=0; i<=10; i++)
			{
				c=n*i;
				fprintf(pont_arq,"%d X %d = %d\n",n,i,c);
				printf("%d X %d = %d\n",n,i,c);
			}
			printf("Qual a Tabuada: ");
			scanf("%d",&n);
			system("cls");
		}
	}
	printf("Dados gravados com sucesso! \n");
	fclose(pont_arq);// fclose para fechar o arquivo
	system("pause");
	return(0);
}