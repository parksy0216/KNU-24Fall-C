#include <stdio.h>
#include <math.h>

double formula(double x) {
    return pow(x, 2) - 1;;
}

int main() {
    double a, b;
    int n = 1, iterations;
    double width, sum;

    printf("������ ���� ���� �Է��ϼ��� : ");
    scanf_s("%lf", &a);
    printf("������ �� ���� �Է��ϼ��� :");
    scanf_s("%lf", &b);
    printf("������ �ִ� ������ �Է��ϼ���(2^n) : ");
    scanf_s("%d", &iterations);

    for (int iter = 0; iter < iterations; iter++) {
        sum = 0.0;
        width = (b - a) / n;

        sum += 0.5 * (formula(a) + formula(b));
        for (int i = 1; i < n; i++) {
            double x = a + i * width;
            sum += formula(x);
        }
        sum *= width;

        printf("���� : %d, ���� ��� : %.6lf\n", n, sum);

        n *= 2;
    }

    return 0;
}
