#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int month, day;
	printf("입력 월: ");
	scanf("%d", &month);
	printf("입력 일: ");
	scanf("%d", &day);

	printf("생일은 %d월 %d일 입니다.\n", month, day);
	return 0;
}