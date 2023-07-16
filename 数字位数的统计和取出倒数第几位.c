#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//在右侧编辑器中的Begin - End之间补充digit()函数，此函数输入为n与k，返回n从右开始的第k个数字，如果k超过了n的位数，则返回 - 1。
int digit(int n,int k)
{
	int count = 0;//位数计数器 第一位时count变成1 如果与k相同 则获取最后一个数字
	while (n != 0)
	{
		count++;
		if (count == k)
		{
			return n % 10;
		}
		n = n / 10;
	}
	return -1;
}
int main()
{
	int n;
	int k;
	scanf("%d%d", &n,&k);
	printf("%d", digit(n,k));
	return 0;
}