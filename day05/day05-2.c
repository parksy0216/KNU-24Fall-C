#include<stdio.h>
#include<stdlib.h>


struct Student {
	int snum;
	char name[100];
	int score;
};

int main() {
	
	int N;
	struct Student* person;

	printf("�л��� �Է�:");
	scanf_s("%d", &N);

	person = (struct Student*)malloc(N * sizeof(struct Student));

	for (int i = 0; i < N;i++) {
		printf("�й�:");
		scanf_s("%d", &person[i].snum);

		char tmp[100];
		printf("�̸�:");
		scanf_s("%s", person[i].name, 100);

		printf("����:");
		scanf_s("%d", &person[i].score);
	}

	for (int i = 0; i < 2; i++) {
		printf("%d %s %d\n", person[i].snum, person[i].name, person[i].score);
	}
	return 0;
}