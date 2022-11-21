#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int n;
	printf("정수 입력(0~25) : ");
	scanf("%d", &n);

	printf("%d번째 영어 대문자는 %c\n", n, 'A' + n);
	return 0;
}