#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	printf("소문자 입력 : ");
	scanf("%c", &c);

	printf("%c는 %d번째 영어 소문자\n", c, c - 'a');
	return 0;
}