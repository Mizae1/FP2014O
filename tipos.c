#include <stdio.h>
int main()
{
	int n = 0;
	char n1 = 'b';
	float n3 = 0;
	double n5 = 0;
	short n7 = 0;
	scanf("%i", &n); //Int
	scanf("%c", &n1); //Char
	scanf("%f", &n3); //Float
	scanf("%f", &n5); //Double, tambien es valido con %d
	scanf("%i", &n7); //Short
	printf("%d\n", n); 
	return 0;
}