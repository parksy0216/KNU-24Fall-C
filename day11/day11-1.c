#include<stdio.h>
#include<math.h>

void formula(double a, double b, double c) {
	double D, R1, R2;

	if (a == 0) {
		printf("a�� 0�� �� �����ϴ�. (�߸��� ��)\n");
		return;
	}

	D = pow(b, 2) - 4 * a * c;

	if (D > 0) {
		R1 = (-b + sqrt(D)) / (2 * a);
		R2 = (-b - sqrt(D)) / (2 * a);
		printf("�Ǳ��� %.2lf�� %.2lf�Դϴ�.\n", R1, R2);
	}
	else if (D == 0) {
		R1 = -b/(2 * a);
		printf("�߱��� %.2lf�Դϴ�.\n", R1);
	}
	else {
		printf("����� �����Ƿ� ���� ������� �ʽ��ϴ�.\n");
	}
}

int main() {
	double a, b, c;

	printf("�������� ��� a�� �Է��ϼ���: ");
	scanf_s("%lf", &a);
	printf("�������� ��� b�� �Է��ϼ���: ");
	scanf_s("%lf", &b);
	printf("����� c�� �Է��ϼ���: ");
	scanf_s("%lf", &c);

	formula(a, b, c);

	return 0;
}