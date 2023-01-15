#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

#include <stdio.h>

int main(void) {
	int X = 0;
	int N = 0;
	int a[MAX] = { 0, };
	int b[MAX] = { 0, };
	int total = 0;

	scanf("%d", &X);
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d%d", &a[i], &b[i]);
	for (int i = 0; i < N; i++)
		total += a[i] * b[i];

	if (X == total)
		printf("Yes");
	else
		printf("No");

	return 0;
}