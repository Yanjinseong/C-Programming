#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int year, month, day;
	scanf("%d/%d/%d", &year, &month, &day);
	printf("%04d³â %02d¿ù %02dÀÏ", year, month, day);
}