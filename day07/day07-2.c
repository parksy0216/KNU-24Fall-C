#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	double x = 0;
	double y = 0;
	double pi = 0;
	double circle = 0;
	int count = 0;
	int a = 0;
	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if (pow(x, 2) + pow(y, 2) <= 1) {
			circle++;
		}
		int percent = count / 10000000;

		if (count % 10000000 == 0) {
			pi = (double)circle / (double)count * 4;
			printf("%d%%진행.. 원주율 : %.6f ", percent, pi);
			if (count % 5000000 == 0)a++;
			if (a == 1)printf("■\n");
			else {
				for (int i = 0; 5 * i <= a;i++) {
					printf("■");
				}
				printf("\n");
			}
		}
	}
	printf("원주율 : %.6f", pi);

	return 0;
}