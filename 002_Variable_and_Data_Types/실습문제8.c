#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	char c;
	printf("�빮�� �Է�: ");
	scanf("%c", &c);
	printf("�ҹ��� ���: %c\n", c + ('a' - 'A'));
	return 0;

}