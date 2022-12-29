#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

#include <stdio.h>

int main(void) {
	int N = 0;
	int M = 0;
	int A[MAX][MAX] = { 0, };
	int B[MAX][MAX] = { 0, };

	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", A[i][j]+B[i][j]);
		}
		printf("\n");
	}

	return 0;
}