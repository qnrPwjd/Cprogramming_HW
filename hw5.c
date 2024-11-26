#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int num);

int main(void) {
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	binary(num);

	return 0;
}

void binary(int num) {
	if (num == 1) {
		printf("1");
	}
	else {
		int n = num % 2;
		binary(num / 2);
		printf("%d", n);
	}
}