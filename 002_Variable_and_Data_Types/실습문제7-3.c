#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	printf("�ҹ��� �Է�: ");
	scanf("%c", &c);
	printf("�빮�� ���: %c", c - ('a' - 'A'));
	return 0;

}