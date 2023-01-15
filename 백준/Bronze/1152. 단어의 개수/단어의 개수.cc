#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000

#include <stdio.h>
#include <string.h>

int main() {
	
	char sen[MAX];
	int word_count=1;

	scanf("%[^\n]s", sen); // %[^입력을 마칠 문자]s : 그 문자를 기준으로 앞에 있는 내용을 저장

	if (sen[0] == ' ')
		word_count--;

	for (int i = 0; i < strlen(sen); i++)
		if (sen[i] == ' ')
			word_count++;

	if (sen[strlen(sen)-1] == ' ')
		word_count--;

	printf("%d", word_count);

	return 0;
}