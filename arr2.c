#include<stdio.h>
int main()
{
	int mr_satan[5] = {1, 3, 5, 7, 9};
	int arr[3][3] = {{4,5,6},{7,5,9},{8,11,15}};
	int i, j;
	arr[2][1] = 3;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}