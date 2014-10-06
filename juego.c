#include <stdio.h>
#include <stdlib.h>
int main()
{
	int salida = 0;
	int entrada = 0;
	int n1, n2;
	int aciertos = 0, errores = 0;
	while(salida == 0){
		n1 = rand()%101;
		n2 = rand()%101;
		printf("Cual es el resultado de %d + %d\n", n1, n2);
		scanf("%d", &entrada);
		if(n1 + n2 == entrada){
			aciertos++;
			printf("Correcto\n");
		} else {
			errores++;
			printf("Incorrecto\n");
		}
		printf("Quieres salir? ingresa 1\n");
		scanf("%d", &salida);
	}
	return 0;
}