#include <stdio.h>
#define TAM 5
int main()
{
	int matriz[TAM][TAM], i, j, suma[TAM];
	for (i = 0; i < TAM; ++i)
	{
		for (j = 0; j < TAM; ++j)
		{
			scanf("%d", &matriz[i][j]);
			suma[i] += matriz[j][i];
		}
	}
	return 0;
}