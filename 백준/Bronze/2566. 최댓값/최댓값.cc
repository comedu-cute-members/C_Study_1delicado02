#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num[9][9] = { 0, };
	int max=0, row=1, column=1;

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			scanf("%d", &num[i][j]);

	max = num[0][0];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < num[i][j]) {
				max = num[i][j];
				row = i + 1;
				column = j + 1;
			}
		}
	}

	printf("%d\n%d %d", max, row, column);

	return 0;
}