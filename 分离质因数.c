#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int fun(int x)
{
	return x * x * x;
}
int main()
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