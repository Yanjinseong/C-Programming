#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int n;
	unsigned char c;
	printf("�Է�: ");
	scanf("%d", &n);

	c = n;

	printf("\n���(int) -> %d\n", n);
	printf("���(unsigned char) -> %d\n", c);

	return 0;
}