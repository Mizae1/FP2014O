#include <stdio.h>

int op(int a, int b){
	int res;
	res = a - b;
	return res;
}
void mensaje(int x){
	printf("El resultado de la operacion es: %d\n", x);
}
int main(int argc, char const *argv[])
{
	int a = op(3,5);
	int b = op(op(5,5), 5);
	mensaje(a);
	mensaje(b);
	return 0;
}