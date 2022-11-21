#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	printf("대문자 입력: ");
	scanf("%c", &c);
	printf("소문자 출력: %c\n", c + ('a' - 'A'));
	return 0;

}