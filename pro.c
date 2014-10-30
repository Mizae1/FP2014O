#include <stdio.h>
float prom;
void imprimir(float res);
float recibeNumero(){
	float res;
	printf("Ingresa un numero\n");
	scanf("%f", &res);
	return res;
}
float promedio(float x, float y){
	float prom = 0;
	printf("Prom 2 vale %f\n", prom);
	prom = (x + y) / 2;
	return prom;
}
void incre(int a){
	a++;
}
int main(){
	float a, b, res;
	int c = 7;
	a = recibeNumero();
	b = recibeNumero();
	prom = 7;
	res = promedio(a, b);
	printf("Prom 1 vale %f\n", prom);
	imprimir(res);

	incre(c);
	printf("Valor de a %d\n", c);

	return 0;
}
void imprimir(float res){
	printf("El promedio es %f\n", res);
	imprimir(3);
}