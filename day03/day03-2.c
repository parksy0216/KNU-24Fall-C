#include<stdio.h>

int factorial(int value) {
	if (value == 0 || value == 1)
		return 1;

	int res = 1;
	res = value * factorial(value - 1);

	return res;
}

int main() {
	
	int num;
	scanf_s("%d", &num);
	int result = factorial(num);
	printf("%d\n", result);

	return 0;
}