#include<stdio.h>
int main()
{
	char ch = 'z';
	if (ch == 'a'){
		printf("a\n");
	}else if(ch == 'e'){
		printf("e\n");
	}else if(ch == 'i'){
		printf("i\n");
	}else if(ch == 'o'){
		printf("o\n");
	}else if(ch == 'u'){
		printf("u\n");
	}

	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("Vocal\n");
		break;
		default:
		printf("Consonante\n");
		break;
	}
	return 0;
}