#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float sum = 0;
	int count = 0;
	int mincount = 0;
	for (int i = 1; i <= 10; i++)
	{
		int n;
		scanf("%d", &n);
		if (n > 0)
		{
			sum = sum + n;
			count++;
		}
		if (n < 0)
		{
			mincount++;
		}
	}
	if (sum == 0 && count == 0&&mincount!=10)
	{
		printf("all are 0");
	}
	else
	{
		printf("%.f\n", sum);
		printf("%.1f", sum / count);
	}
	return 0;
}