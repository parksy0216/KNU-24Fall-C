#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char* str) {
    char* a = str;
    char* b = str + strlen(str) - 1;

    while (a < b) {
        if (isalpha(*a) && isalpha(*b)) {
            char temp = *a;
            *a = *b;
            *b = temp;
            a++;
            b--;
        }
        else {
            if (!isalpha(*a)) a++;
            if (!isalpha(*b)) b--;
        }
    }
}

int main() {
    char str[100];

    printf("���� ���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);
    printf("�������� ���ڿ�: %s\n", str);

    return 0;
}
