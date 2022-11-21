#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int n;
	unsigned char c;
	printf("입력: ");
	scanf("%d", &n);

	c = n;

	printf("\n출력(int) -> %d\n", n);
	printf("출력(unsigned char) -> %d\n", c);

	return 0;
}