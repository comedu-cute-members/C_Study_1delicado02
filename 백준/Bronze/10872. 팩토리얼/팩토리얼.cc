#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int N = 0;
	int result = 1;

	scanf("%d", &N);

	if (N == 0)
		result = 1;
	else
		for (int i = 1; i <= N; i++)
			result *= i;

	printf("%d", result);

	return 0;
}