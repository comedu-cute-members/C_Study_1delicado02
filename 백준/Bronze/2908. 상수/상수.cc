#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int A = 0, B = 0;

	scanf("%d%d", &A, &B);

	A = (A / 100) + (A / 10 % 10) * 10 + (A % 10) * 100;
	B = (B / 100) + (B / 10 % 10) * 10 + (B % 10) * 100;

	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);

	return 0;
}