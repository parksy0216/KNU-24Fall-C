#include <stdio.h>

void pyramid(int floor) {

    printf("%d�� �Ƕ�̵�\n", floor);

    for (int i = 1; i <= floor; i++){

        for (int a = 1; a <= floor - i; a++) {
            printf(" ");
        }
        for (int b = 1; b <= 2 * i - 1; b++) {
            printf("*");
        }
        printf("\n");

    }
}
int main() {
    int floor;

    printf("�Ƕ�̵��� ������ �Է��ϼ���: ");
    scanf_s("%d", &floor);

    pyramid(floor);

    return 0;
}
