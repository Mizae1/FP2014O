/*
 * datos.c
 *
 *  Created on: 17/09/2014
 *      Author: JAPIER
 */

#include <stdio.h>
int main(){
	/* char = 8 bits                     %c
	 * int = 32 bits                     %d %i
	 * unisigned int = 32 bits sin signo %u
	 * float = 32 bits numeros decimales %f
	 * long = Duplica el valor           %g
	 * double = 64 bits                  %f %g
	 * array							 %s
	 * anita lava la tina
	 * anit al aval atina
	 */
	setvbuf(stdout, NULL, _IONBF, 0);
	int n1;
	float div = 0;
	printf("Dame un valor\n");
	scanf("%d", &n1);
	div = 16/(float)n1;

	printf("El resultado es %f\n", div);
	return 0;
}
