#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	int n;

	printf("������ �Է� (%%c) :");
	scanf("%c", &c);
	n = c - '0';


	printf("\n���ڷ� ���(%%c) : %c\n", c);
	printf("������ ���(%%d) : %d\n", n);

	return 0;
}