#define _CRT_SECURE_NO_DEPRECATE
#define CLOCKS_PER_SEC

#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool* leitura_arquivo(long long int& n, bool* V, string nome_arquivo)
{
	FILE* arquivo;
	long long int i;

	arquivo = fopen(nome_arquivo.c_str(), "rt");
	fscanf(arquivo, "%lld", &n);
	printf("Valor de n: %lld\n", n);
	V = (bool*)malloc((n) * sizeof(bool));

	i = 0;
	while (!feof(arquivo))
	{
		fscanf(arquivo, "%d", &V[i]);
		i++;
	}


	fclose(arquivo);
	return V;
}