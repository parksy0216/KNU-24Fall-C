#include <stdio.h>
#include <math.h>

double formula(double x) {
    return pow(x, 2) - 1;;
}

int main() {
    double a, b;
    int n = 1, iterations;
    double width, sum;

    printf("적분할 시작 값을 입력하세요 : ");
    scanf_s("%lf", &a);
    printf("적분할 끝 값을 입력하세요 :");
    scanf_s("%lf", &b);
    printf("시행할 최대 구간을 입력하세요(2^n) : ");
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

        printf("구간 : %d, 적분 결과 : %.6lf\n", n, sum);

        n *= 2;
    }

    return 0;
}
