#include <stdio.h>
int main()
{
	char palabra[30];
	int i = 0, llave;
	printf("Dame una palabra\n");
	gets(palabra);
	system(palabra);
	printf("Dame la llave\n");
	scanf("%d", &llave);
	while(palabra[i] != '\0'){
		if(palabra[i] + llave > 90) {
			palabra[i] -= 26;
		}
		printf("%c", palabra[i] + llave);
		i++;
	}
	printf("\n");

	return 0;
}