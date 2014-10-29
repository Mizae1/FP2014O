#include <stdio.h>
#define TOTAL_VALORES 5
float valores[TOTAL_VALORES] = {3.5, 3, 2, 1, .5};
float cambio(float dinero){
	int i;
	for(i = 0; i<TOTAL_VALORES; i++){
		if(dinero >= valores[i]){
			printf("Valor restado %f\n", valores[i]);
			return dinero-valores[i];
		}
	}
}
int main()
{
	float a;
	int b;
	scanf("%f", &a);
	while(a != 0){
		a = cambio(a);
	}
	return 0;
}