#include <stdio.h>
int main(){
	int x = 0;
	scanf("%d", &x);
	while(x < 10){ // Se ejecuta mientras la condicion se siga cumpliendo
		printf("%d\n", x);
		x = x + 2;
	}

	do { // Se ejecuta minimo una vez, sin importar que la condicion no se cumpla
		printf("Numero\n");
	}while(x == 4); //Tiene que tener ; al final del while


	for (x = 1; x<10 ; x += 2){ //for(inicio, conficion de salida, incremento)
		printf("%d\n", x);
	}
	return 0;
}