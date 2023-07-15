#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int min1(int x,int y)//更相减损法
{
	while (x != y)
	{
		if (x > y)//关键
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
int min2(int x, int y)//辗转相除法
{
	while (x % y != 0&&y%x!=0)
	{
		if (x > y)//关键
		{
			x = x % y;
		}
		else
		{
			y = y % x;
		}
	}
	if (x % y == 0)
		return y;
	return x;
}
int min3(int x, int y)//列举法
{
	int min;
	if (x > y)
	{
		for (int i = 1; i <= y; i++)
		{
			if (x % i == 0 && y % i == 0)
			{
				min = i;
			}
		}
		return min;
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			if (x % i == 0 && y % i == 0)
			{
				min = i;
			}
		}
		return min;
	}
}
int min4(int x, int y)//更像减损法递归
{
	if (x == y)
		return x;
	if (x > y)
	{
		return min4(y,x-y);//两个变量的位置可以更改
	}
	return min4(x, y - x);
}
int min5(int x, int y)//递归辗转相除法
{
	if (x%y==0)//这里我最开始写的是x==y  显然不对，因为辗转相除法的结束条件余数为0时的
		return y;
	if (x > y)
		return min5(y,x%y);//注意两个变量位置不能随意更改 因为最后一步判定时 x与y的关系不等价
	return min5(x,y%x);
}
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int min, max;
	min = min4(x, y);
	max = x * y / min;//最小公倍数*最大公因数=两数之乘积
	printf("%d %d", min, max);
	return 0;
}