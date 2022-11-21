#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int a, b, c;
	printf("가격입력: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("상품1 %5d원\n", a);
	printf("상품2 %5d원\n", b);
	printf("상품3 %5d원\n", c);
}