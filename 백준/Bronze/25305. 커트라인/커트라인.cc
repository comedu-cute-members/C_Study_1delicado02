#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000

#include <stdio.h>

int main(void) {
	int N = 0;
	int k = 0;
	int x[MAX] = { 0, };
	int temp = 0;

	scanf("%d%d", &N, &k);
	for (int i = 0; i < N; i++)
		scanf("%d", &x[i]);

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (x[j] < x[j+1]) {
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}

	printf("%d", x[k - 1]);


	return 0;
}