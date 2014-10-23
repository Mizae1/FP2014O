#include <stdio.h>
#include <stdlib.h>
int tablero[30][30];
int main()
{
	int i, j;
	char nombre[30];
	char tecla[1];
	int contador_puntos = 0;
	int jugador[2] = {3, 5};
	int enemigo[2] = {5, 15};
	int premio[2] = {2, 1};
	printf("Dame tu nombre\n");
	gets(nombre);

	while(1){
		fflush(stdout);
		printf("Jugador: %s puntos: %d\n", nombre, contador_puntos);
		/*Parte de logica*/
		switch(tecla[0]){
			case 'w':
				if(jugador[0] != 0){
					jugador[0]--;
				}
			break;
			case 's':
				if(jugador[0] != 29){
					jugador[0]++;
				}
			break;
			case 'a':
				if(jugador[1] != 0){
					jugador[1]--;
				}
			break;
			case 'd':
				if(jugador[1] != 29){
					jugador[1]++;
				}
			break;
		}
		if(enemigo[0] > jugador[0]){
			enemigo[0]--;
		} else if (enemigo[0] < jugador[0]){
			enemigo[0]++;
		}
		else if(enemigo[1] > jugador[1]){
			enemigo[1]--;
		} else if (enemigo[1] < jugador[1]){
			enemigo[1]++;
		}
		if(jugador[0] == enemigo[0] && jugador[1] == enemigo[1]){
			printf("Pierdes\n");
			break;
		}
		/*Dibujo*/
		for (i = 0; i < 30; ++i)
		{
			printf("|");
			for (j = 0; j < 30; ++j)
			{
				if(i == jugador[0] && j == jugador[1]){
					printf("%c ", '*');
				} else if (i == enemigo[0] && j == enemigo[1]){
					printf("%c ", '&');
				}else if (i == premio[0] && j == premio[1]){
					printf("%c ", 14);
				}else {
					printf("%d ", tablero[i][j]);
				}
			}
			printf("|\n");
		}

		/*Segunda parte*/
	
		gets(tecla);
		contador_puntos++;
		system("cls");
	}
	return 0;
}