#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	printf("�ҹ��� �Է� : ");
	scanf("%c", &c);

	printf("%c�� %d��° ���� �ҹ���\n", c, c - 'a');
	return 0;
}