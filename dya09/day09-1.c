#include<stdio.h>

struct Vector {
	float x;
	float y;
	float z;
};

void printVector(struct Vector v) {
	printf("(%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
}

struct Vector addVectors(struct Vector v1, struct Vector v2) {
	struct Vector result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;
}

struct Vector subVectors(struct Vector v1, struct Vector v2) {
	struct Vector result;
	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	return result;
}

float dotProduct(struct Vector v1, struct Vector v2) {
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

struct Vector crossProduct(struct Vector v1, struct Vector v2) {
	struct Vector result;
	result.x = v1.y * v2.z - v1.z * v2.y;
	result.y = v1.z * v2.x - v1.x * v2.z;
	result.z = v1.x * v2.y - v1.y * v2.x;
	return result;
}

int main() {
	struct Vector v1, v2;

    printf("첫번째 벡터(x, y, z) : ");
	scanf_s("%f %f %f", &v1.x, &v1.y, &v1.z);

	printf("두번째 벡터(x, y, z) : ");
	scanf_s("%f %f %f", &v2.x, &v2.y, &v2.z);

	printf("\n입력된 첫번째 벡터: ");
	printVector(v1);

	printf("입력된 두번째 벡터: ");
	printVector(v2);

	while (1) {
		int choice;
		printf("\n다음 중 하나를 선택하세요:\n");
		printf("1. 벡터의 합\n");
		printf("2. 벡터의 차\n");
		printf("3. 벡터의 외적\n");
		printf("4. 벡터의 내적\n");
		printf("5. 종료\n");
		printf("명령 입력 : ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1: {
			struct Vector vAdd = addVectors(v1, v2);
			printf("\n벡터의 합은 ");
			printVector(vAdd);
			break;
		}
		case 2: {
			struct Vector vSub = subVectors(v1, v2);
			printf("\n벡터의 차는 ");
			printVector(vSub);
			break;
		}
		case 3: {
			struct Vector vCross = crossProduct(v1, v2);
			printf("\n벡터의 외적은 ");
			printVector(vCross);
			break;
		}
		case 4: {
			float vDot = dotProduct(v1, v2);
			printf("\n벡터의 내적은 vec1 * vec2=%.2f\n", vDot);
			break;
		}
		case 5: {
			exit(0);
		}
		default:
			printf("\n잘못된 입력입니다.\n");
			break;
		}
	}

	return 0;

}