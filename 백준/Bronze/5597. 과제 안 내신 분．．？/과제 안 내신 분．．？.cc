#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int student_num = 0;
	int student[31] = { 0, };
	int not_submit[2] = { 0, };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &student_num);
		student[student_num] = 1;
	}

	int j = 0;
	for (int i = 1; i < 31; i++) {
		if (student[i] == 0) {
			not_submit[j] = i;
			j++;
		}
	}

	int temp;
	if (not_submit[0] > not_submit[1]) {
		temp = not_submit[0];
		not_submit[0] = not_submit[1];
		not_submit[1] = temp;
	}

	printf("%d\n%d", not_submit[0], not_submit[1]);

	return 0;
}