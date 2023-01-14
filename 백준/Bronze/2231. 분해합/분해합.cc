#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	int N = 0;
	int NUM = 0;
	int sum = 0;
	int generator = 0;
	int G = 0;

	scanf("%d", &N);
	
	for (int NUM = N -54 ; NUM < N ; NUM++) {
		if (NUM < 0)
			continue;
		else {
			generator = NUM;
			sum = 0;
			sum += generator;
			for (int i = 0; i < 7; i++) {
				sum += generator % 10;
				generator = generator / 10;
				//printf("temp_=%d\n", sum);
			}
			//printf("NUM=%d sum=%d\n",NUM, sum);
			if (sum == N) {
				printf("%d", NUM);
				return 0;
			}
		}
	}
	
	printf("%d", 0);
	return 0;
}