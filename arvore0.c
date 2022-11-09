/*
	Programa de construção e impressão de uma arvore binaria ordenada.
	É o mesmo programa existente em 66_ED-Arvores.pdf
*/
#include <stdio.h>
#include <stdlib.h>

struct regNo
{ 	struct regNo *esq;
	int valor;
	struct regNo *dir;
};
typedef struct regNo TNo;

TNo *AchaPai(TNo *, int);
void ImprimeArvore(TNo *, int);
int ContaNos(TNo *);
int SomaNos(TNo *);
int ContaPares(TNo *);


int main(void)
{	TNo *raiz = NULL, *aux, *pai;
	int numero;

	while (1)
	{	printf("\nInforme o valor:\n");
		scanf("%d", &numero);

		if (numero < 0) 
			break;
			
		aux = (TNo *) malloc(sizeof(TNo));
		aux->valor = numero;
		aux->dir = NULL;
		aux->esq = NULL;

		/* Fazendo o encadeamento do novo noh */
		pai = AchaPai(raiz, numero);
		if (pai == NULL)
			raiz = aux;
		else
			if (numero <= pai->valor)
				pai->esq = aux;
			else
				pai->dir = aux;
	}
	
	printf("\n\nA arvore possui %d elementos:\n", ContaNos(raiz));
	printf("\nA soma dos nohs eh: %d\n", SomaNos(raiz)); 
	printf("\nA soma dos pares eh:%d\n", SomaPares(raiz));
	ImprimeArvore(raiz, 0);
	
	return 0;
}

TNo *AchaPai(TNo *r, int n)
{	if (r == NULL)
		return NULL;
	else
		if (n <= r->valor)
		/* n é descendente do lado esquerdo de r */
			if (r->esq == NULL)
				return r;
			else
				return AchaPai(r->esq, n);
		else
		/* n é descendente do lado direito de r */
			if (r->dir == NULL)
				return r;
			else
				return AchaPai(r->dir, n);
}

void ImprimeArvore(TNo *r, int n)
{ 
	int c;
	if (r != NULL)
	{ 
		for (c = 0; c < n; c++) printf("\t");
		printf("%d\n", r->valor);
		ImprimeArvore(r->esq, n + 1);
		ImprimeArvore(r->dir, n + 1);
	}
}

int ContaNos(TNo *raiz)
{
	if (raiz== NULL)
		return 0;
	else	
		return 1 + ContaNos(raiz->esq) + ContaNos(raiz->dir);
	
}

int SomaPares(TNo *raiz)
{	

	
	if (raiz== NULL)
		return 0;
	else
		if (raiz->valor%2 == 0)
			return 1 + SomaPares(raiz->esq) + SomaPares(raiz->dir);
		else 
			return SomaPares(raiz->esq) + SomaPares(raiz->dir);
}

int ContaPares(TNo *raiz)
{
	if (raiz== NULL)
		return 0;
	else	
		if (raiz->valor%2 == 0)+ ContaPares(raiz->esq) + ContaPares(raiz->dir);
}

//int ContaPares(TNo *raiz)
//{
//	if (raiz== NULL)
//		return 0;
//	else	
//		if (raiz->valor%2 == 0)
//			return 1 + ContaPares(raiz->esq) + ContaPares(raiz->dir);
//		else 
//			return ContaPares(raiz->esq) + ContaPares(raiz->dir);
//}


//int SomaPares(TNo *raiz)
//{
//	if (raiz== NULL)
//		return 0;
//	else
//		if (raiz->valor%2 == 0)
//			return 1 + SomaPares(raiz->esq) + SomaPares(raiz->dir);
//		else 
//			return SomaPares(raiz->esq) + SomaPares(raiz->dir);
//}