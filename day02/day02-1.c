#include<stdio.h>

int main()
{
	int operation;
	double num1=0, num2=0;
	double result=0;

	printf("���ϴ� ����� �Է��Ͻʽÿ�\n");
	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������\n");

	printf("��� : ");
	scanf_s("%d", &operation);

	printf("���� 1�� �Է��ϼ��� : ");
	scanf_s("%d", &num1);

	printf("���� 2�� �Է��ϼ��� : ");
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