#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[40];
	float salario;
	
	struct nascimento{
		int ano;
		int mes;
		int dia;
	} dt_nascimento;
}dados;

int main(void)
{
	//struct ST_DADOS *p;
	
	dados *p = malloc(sizeof(dados));
	//strcpy(p->nome,"gay");

	
	printf("Escreva seu nome:");
	scanf("%s",p->nome);
	printf("Escreva seu ano de nascimento:");
	scanf("%d",&p->dt_nascimento.ano);
	printf("Escreva seu mes de nascimento:");
	scanf("%d",&p->dt_nascimento.mes);
	printf("Escreva seu dia de nascimento:");
	scanf("%d",&p->dt_nascimento.dia);
	printf("Escreva seu salario:");
	scanf("%f",&p->salario);
	
	printf("Voce se chama %s, nascido em %d do %d de %d\ne voce ganha %f por mes",p->nome,p->dt_nascimento.dia,p->dt_nascimento.mes,p->dt_nascimento.ano,p->salario);
	free(p);
	
	return 0;
	
}
