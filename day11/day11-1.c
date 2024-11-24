#include<stdio.h>
#include<math.h>

void formula(double a, double b, double c) {
	double D, R1, R2;

	if (a == 0) {
		printf("a는 0일 수 없습니다. (잘못된 식)\n");
		return;
	}

	D = pow(b, 2) - 4 * a * c;

	if (D > 0) {
		R1 = (-b + sqrt(D)) / (2 * a);
		R2 = (-b - sqrt(D)) / (2 * a);
		printf("실근은 %.2lf와 %.2lf입니다.\n", R1, R2);
	}
	else if (D == 0) {
		R1 = -b/(2 * a);
		printf("중근은 %.2lf입니다.\n", R1);
	}
	else {
		printf("허근을 가지므로 근을 출력하지 않습니다.\n");
	}
}

int main() {
	double a, b, c;

	printf("이차항의 계수 a를 입력하세요: ");
	scanf_s("%lf", &a);
	printf("일차항의 계수 b를 입력하세요: ");
	scanf_s("%lf", &b);
	printf("상수항 c를 입력하세요: ");
	scanf_s("%lf", &c);

	formula(a, b, c);

	return 0;
}