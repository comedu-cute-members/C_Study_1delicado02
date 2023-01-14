#define _CRT_SECURE_NO_WARNINGS
#define MAX 100
#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <string.h>

char word[MAX][MAX] = { 0, };

int group_word_check(int i, int word_len) {
	for (int j = 0; j < word_len - 1; j++) {
		for (int k = j + 1; k < word_len; k++) {
			if (word[i][j] == word[i][k] && word[i][j] != word[i][j + 1])
				return FALSE;
		}
	}
	return TRUE;
}

int main() {
	int N = 0;

	int group_word_count = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &word[i][0]);
		if(group_word_check( i, strlen(word[i])))
			group_word_count++;
	}

	printf("%d", group_word_count);

	return 0;
}