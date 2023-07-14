#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year,month,day;
	int sum = 0;
	printf("please input year month day");
	scanf("%d%d%d", &year, &month, &day);
	sum = day;
	int ad[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	for (int i = 0; i < month; i++)
	{
		sum = sum + ad[i];
	}

	printf("%d", sum);
	return 0;
}