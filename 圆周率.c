#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	double pi=0;
	double e=0;
	double i = 1;
	int count = 2;
	scanf("%lf", &e);
	while (1/i>e||1/i<-e)
	{
		if (count % 2 == 0)
			pi = pi + 4 / i;
		else
		{
			pi = pi - 4 / i;
		}
		count++;
		i = i + 2;
	}
	printf("%.6lf", pi);
	return 0;
}