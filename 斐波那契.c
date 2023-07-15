#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
long int fun(int n)//实现求出第n个斐波那契数
{
	if (n == 1 || n == 2)
		return 1;
	return fun(n - 1) + fun(n - 2);
}
int main()
{
	long int f1, f2;
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n+1; i++)//打印前n个斐波那契数
	{
		printf("%10d", fun(i));//控制输出10个长度 右对齐 如果超出10位不管 不足十位补齐空格
		if (i % 8 == 0)//每输出8个数进行换行
			printf("\n");
	}
	return 0;
}
