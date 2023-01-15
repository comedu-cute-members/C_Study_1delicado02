#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* num1, int* num2)
{
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void)
{
	int N = 0, num[1000] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < N; i++)
		for (int j = i+1 ; j < N; j++)
			if (num[i] > num[j])
				swap(&num[i], &num[j]);
	for (int i = 0; i < N; i++)
		printf("%d\n", num[i]);
	
	return 0;
}