#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	int n;

	printf("문자형 입력 (%%c) :");
	scanf("%c", &c);
	n = c - '0';


	printf("\n문자로 출력(%%c) : %c\n", c);
	printf("정수로 출력(%%d) : %d\n", n);

	return 0;
}