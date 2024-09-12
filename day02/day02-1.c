#include<stdio.h>

int main()
{
	int operation;
	double num1=0, num2=0;
	double result=0;

	printf("원하는 기능을 입력하십시오\n");
	printf("1.더하기 2.빼기 3.곱하기 4.나누기\n");

	printf("기능 : ");
	scanf_s("%d", &operation);

	printf("숫자 1을 입력하세요 : ");
	scanf_s("%d", &num1);

	printf("숫자 2을 입력하세요 : ");
	scanf_s("%d", &num2);

	if (operation == 1) {
		result = num1 + num2;
		printf("%d + %d = %d", num1, num2, result);
	}
	else if (operation == 2) {
		result = num1 - num2;
		printf("%d - %d = %d", num1, num2, result);
	}
	else if (operation == 3) {
		result = num1 * num2;
		printf("%d * %d = %d", num1, num2, result);
	}
	else if (operation == 4) {
		result = num1 / num2;
		printf("%d / %d = %d", num1, num2, result);
	}
	return 0;
}