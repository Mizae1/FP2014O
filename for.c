#include <stdio.h>
int main(){
	int x = 0;
	scanf("%d", &x);
	while(x < 10){
		printf("%d\n", x);
		x = x + 2;
	}

	do {
		printf("Numero\n");
	}while(x == 4);
	for (x = 1; x<10 ; x += 2){
		printf("%d\n", x);
	}
	return 0;
}