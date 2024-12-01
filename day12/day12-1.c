#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int anum[10001];
int bnum[10001];

int solution(int topping[], size_t topping_len) {
	int answer = 0;
	int a = 0, b = 0;

	for (int i = 0; i< topping; i++) {
		if (anum[topping[i]] == 0) a++;
		anum[topping[i]]++;
	}
     
	for (int i = 0; i < topping; i++) {
		if (bnum[topping[i]] == 0) {
			b++;
			bnum[topping[i]] = 1;
		}
		anum[topping[i]]--;
		if (anum[topping[i]] == 0) a--;

		if (a == b)answer++;
	}
	return answer;
}
