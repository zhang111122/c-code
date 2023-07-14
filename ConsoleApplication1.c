#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year,month,day;
	int sum = 0;
	printf("please input year month day");
	scanf("%d%d%d", &year, &month, &day);
	switch (month)
	{
	case 1:
		sum = day;
		break;
	case 2:
		sum = day + 31;
		break;
	case 3:
		sum = day + 31 + 28;
		break;
	case 4:
		sum = day + 31 + 28 + 31;
		break;
	case 5:
		sum = day + 31 + 28 + 31 + 30;
		break;
	case 6:
		sum = day + 31 + 28 + 31 + 30 + 31;
		break;
	case 7:
		sum=day + 31 + 28 + 31 + 30 + 31+30;
		break;
	case 8:
		sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
		break;
	case 9:
		sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		break;
	case 10:
		sum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		break;
	case 11:
		sum= day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31;
		break;
	case 12:
		day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31+30;
		break;
	default:
		break;
	}

	printf("%d", sum);
	return 0;
}