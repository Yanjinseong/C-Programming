#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int month, day;
	printf("생일 입력\n");
	printf("입력 월 일: ");
	scanf("%d %d", &month, &day);
	printf("생일은 %d월 %d일 입니다.", month, day);
	return 0;


}