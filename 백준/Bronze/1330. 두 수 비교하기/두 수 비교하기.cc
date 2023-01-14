#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	scanf("%d", &A);
	scanf("%d", &B);

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else
		printf("==");

	return 0;
}