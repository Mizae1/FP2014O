#include <stdio.h>
int main()
{
	int n1 = 0;
	float n2 = 0;
	float n3 = 0;
	printf("Dame un numero\n");
	scanf("%i", &n1);
	printf("Dame otro numero\n");
	scanf("%f", &n2);
	n3 = n1 * n2;
	printf("El resultado es %.2f\n", n3);
	return 0;
}