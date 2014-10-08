#include <stdio.h>
int main()
{
	int x, y, n1;
	printf("Dame el numero\n");
	scanf("%i", &n1);
	for (x = 0; x < n1; ++x)
	{
		for ( y = 0; y < x+1; ++y)
		{
			printf("*");
		}
		printf("\n");
	}
	for (x = n1-1; x > 0; --x)
	{
		for ( y = 0; y < x; ++y)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}