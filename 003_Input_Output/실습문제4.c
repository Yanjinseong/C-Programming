#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	double a;
	
	printf("실습 입력: ");
	scanf("%lf", &a);
	
	printf("반올림 정수 출력: %.0f", a);
}