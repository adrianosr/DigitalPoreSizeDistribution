#define _CRT_SECURE_NO_DEPRECATE
#define CLOCKS_PER_SEC

#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void leitura_configuracao(int& a2, int& b2, int& c2, double& TP)
{
	FILE* arquivo;
	int i, tamanho;
	char Linha[150];

	arquivo = fopen("Configuracao_do_Stack.txt", "rt");

	fgets(Linha, 150, arquivo);
	fgets(Linha, 150, arquivo);
	fgets(Linha, 150, arquivo);
	fscanf(arquivo, "%d", &a2);
	a2 = a2 - 1;
	fgets(Linha, 150, arquivo);
	fgets(Linha, 150, arquivo);
	fscanf(arquivo, "%d", &b2);
	b2 = b2 - 1;
	fgets(Linha, 150, arquivo);
	fgets(Linha, 150, arquivo);
	fscanf(arquivo, "%d", &c2);
	c2 = c2 - 1;
	fgets(Linha, 150, arquivo);
	fgets(Linha, 150, arquivo);
	//fgets(Linha, 150, arquivo);
	fscanf(arquivo, "%lf", &TP);
	//TP = TP - 1;

	/*printf("Valor de a2: %d\n", a2);
	printf("Valor de b2: %d\n", b2);
	printf("Valor de c2: %d\n", c2);
	printf("Valor de TP: %2.0lf\n", TP);*/
}