#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()// 函数法的优点是逻辑清晰 只用一个循环并且不额外开辟数组
//本方法优点时间快 但是缺点是占用空间而且不能控制打印个数 因为数组空间是固定的不能额外开辟内存比较麻烦
{
	int arr[30];
	arr[0] = 1;
	arr[1] = 1;
	int n;
	scanf("%d", &n);
	for (int i = 0; i <=n-3 ; i++)//制作斐波那契数组
	{
		arr[i + 2] = arr[i + 1] + arr[i];
	}
	for (int i = 0; i < n; i++)//打印斐波那契数组
	{
		printf("%10d", arr[i]);
		if (i % 8 == 7)//打印第八个后 进行换行 第八个元素存储在arr【7】
			printf("\n");
	}
	return 0;
}