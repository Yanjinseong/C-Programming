#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
	int w, h;
	printf("가로: ");
	scanf("%d", &w);
	printf("세로: ");
	scanf("%d", &h);
	printf("넓이->%d", w * h);


	/*double w, h;
	printf("가로: ");
	scanf("%lf", &w);
	printf("세로: ");
	scanf("%lf", &h);
	printf("넓이->%.2f", w*h);*/
}