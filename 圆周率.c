#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	double pi=0;
	double e=0;
	double i = 1;
	int count = 2;
	scanf("%lf", &e);//读入一个精度 利用公式pi/4=1-1/3+1/5+.... 当最后一项小于精度时跳出循环
	while (1/i>e||1/i<-e)//这里最容易出错 循环条件小心些  写for循环 for(double i=1;1/i>e||1/i<-e;i=i+2)
	{
		if (count % 2 == 0)//符号位判定
			pi = pi + 4 / i;
		else
		{
			pi = pi - 4 / i;
		}
		count++;
		i = i + 2;//每一项的分母自加2
	}
	printf("%.6lf", pi);
	return 0;
}
