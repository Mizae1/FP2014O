#include <stdio.h>
int main()
{
	int x = 0, y = 1, z;
	int i;
	for (i = 0; i < 10; ++i)
	{
		
		z = x + y;
		x = y;
		y = z;
		if(i == 5){
			continue;
		}
		printf("%i,",z);

	}
	return 0;
}