#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int n;
	printf("���� �Է�(0~25) : ");
	scanf("%d", &n);

	printf("%d��° ���� �빮�ڴ� %c\n", n, 'A' + n);
	return 0;
}