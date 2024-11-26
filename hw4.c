#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);

	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) {
			printf("It is not a prime number.");
			return 0;
		}
	}	
	printf("It is a prime number.");
	return 0;
}