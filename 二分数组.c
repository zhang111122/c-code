#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()//二分段交换数组元素  给一个数组  一个k 分成两半 前一半k个元素 后一半n-k个元素 
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	scanf("%d", &k);
	int arr1[10];
	for (int i = 0; i < k; i++)//将前n个数存入数组1
		arr1[i] = arr[i];
	int arr2[10];
	for (int i = k; i < 10; i++)//将后10-n个数存入数组2
		arr2[i - k] = arr[i];
	for (int i = 0; i < 10 - k; i++)//将数组2填入开头
		arr[i] = arr2[i];
	for (int i = 10-k; i < 10; i++)//将数组1填入结尾
		arr[i] = arr1[i-10+k];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}