#include <stdio.h>
#include <stdlib.h>
int main()
{
	char arr[100] = "Hola, Bienvenidos";
	int i = 0, j;
	printf("--%s--\n", arr);
	gets(arr);
	while (arr[i] != '\0'){
		i++;
	}
	for (j = i-1; j >= 0; --j)
	{
		printf("%c", arr[j]);
	}
	return 0;
}