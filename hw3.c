/*
*/
#include <stdio.h>

int main(void) {
	const int lines = 5;
	for (int i = 1; i <= lines; i++) {
		for (int j = 1; j <= lines - i; j++)
			printf(" ");
		for (int k = 1; k <= (2 * i - 1); k++)
			printf("*");
		printf("\n");
	}
	return 0;
}