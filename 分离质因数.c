﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int fun(int x)
{
	return x * x * x;
}
int main()//有一个地方需要注意当最后两个质因数相同时 比如100=2*2*5*5 在循环中i=5的时候n变成5 此时仍然满足循环条件因此仍然会进行循环 之后n就会变成1 再进行for循环的判断 最后的1不应该打印
{
	int n;
	scanf("%d",&n);
	printf("%d=", n);//读一个数
	int flag = 0;
	for (int i = 2; i <= n / 2; i++)//质因数从小到大遍历
	{
		while (n%i==0)//最后n会变成一个质数 因此将循环全部执行之后还要输出一个最后的质因数
		{
			if (flag == 1)
				printf("*");
			flag = 1;
			printf("%d", i);
			n = n / i;
		}
		
	}
	printf("*%d", n);
	return 0;
}
