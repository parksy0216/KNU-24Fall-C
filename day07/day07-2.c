#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void) {

	double x = 0;
	double y = 0;
	double pi = 0;
	int count = 0, circle = 0;


	srand(time(NULL));

	while (count <1000000000 ) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if (pow(x, 2) + pow(y, 2) <= 1) {
			circle++;
		}
		int percent = count / 10000000;

		if (count % 10000000 == 0) {
			pi = 4*(double)count / (double)circle;
			printf("%d%%진행 . . 원주율: %.6f", percent, pi);

			if (percent >= 0 && percent <= 5) {
				printf("□□□□□□□□□□□□□□□□□□□□\n");
			}
			else if (percent > 5 && percent <= 10) {
				printf("■□□□□□□□□□□□□□□□□□□□\n");
			}
			else if (percent > 10 && percent <= 15) {
				printf("■■□□□□□□□□□□□□□□□□□□\n");
			}
			else if (percent > 15 && percent <= 20) {
				printf("■■■□□□□□□□□□□□□□□□□□\n");
			}
			else if (percent > 20 && percent <= 25) {
				printf("■■■■□□□□□□□□□□□□□□□□\n");
			}
			else if (percent > 25 && percent <= 30) {
				printf("■■■■■□□□□□□□□□□□□□□□\n");
			}
			else if (percent > 30 && percent <= 35) {
				printf("■■■■■■□□□□□□□□□□□□□□\n");
			}
			else if (percent > 35 && percent <= 40) {
				printf("■■■■■■■□□□□□□□□□□□□□\n");
			}
			else if (percent > 40 && percent <= 45) {
				printf("■■■■■■■■□□□□□□□□□□□□\n");
			}
			else if (percent > 45 && percent <= 50) {
				printf("■■■■■■■■■□□□□□□□□□□□\n");
			}
			else if (percent > 50 && percent <= 55) {
				printf("■■■■■■■■■■□□□□□□□□□□\n");
			}
			else if (percent > 55 && percent <= 60) {
				printf("■■■■■■■■■■■□□□□□□□□□\n");
			}
			else if (percent > 60 && percent <= 65) {
				printf("■■■■■■■■■■■■□□□□□□□□\n");
			}
			else if (percent > 65 && percent <= 70) {
				printf("■■■■■■■■■■■■■□□□□□□□\n");
			}
			else if (percent > 70 && percent <= 75) {
				printf("■■■■■■■■■■■■■■□□□□□□\n");
			}
			else if (percent > 75 && percent <= 80) {
				printf("■■■■■■■■■■■■■■■□□□□□\n");
			}
			else if (percent > 80 && percent <= 85) {
				printf("■■■■■■■■■■■■■■■■□□□□\n");
			}
			else if (percent >85 && percent <= 90) {
				printf("■■■■■■■■■■■■■■■■■□□□\n");
			}
			else if (percent > 90 && percent <= 95) {
				printf("■■■■■■■■■■■■■■■■■■□□\n");
			}
			else if (percent > 95 && percent < 100) {
				printf("■■■■■■■■■■■■■■■■■■■□\n");
			}
			else if (percent == 100) {
				printf("■■■■■■■■■■■■■■■■■■■■\n");
			}
		}
		printf("원주율 : %.6f", pi);
	}
	return 0;
}