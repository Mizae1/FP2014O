#include <stdio.h>
#include <stdlib.h>
int main()
{
	char arr[100] = "Hola, Bienvenidos";
	int i = 0, j, n_vocales = 0;
	char v[5] = {'a','e','i','o','u'};
	printf("--%s--\n", arr);
	gets(arr);
	while (arr[i] != '\0'){
		
		for (j = 0; j < 5; ++j)
		{
			if(arr[i] == v[j]){
				n_vocales++;
			}
		}
		i++;
	}
	printf("%d\n", n_vocales);
	return 0;
}