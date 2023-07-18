#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	char c;
	int count = 0;
	int arr[20];
	int sum = 0;
	while ((c = getchar()) != '\n')
	{
	
		if (c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F')
			arr[count] = c - 87;//本体关键 如何将字符转化成对应的十进制数   字符型变量与整形运算 是用ascall码相互运算
		else
			arr[count] = c - 48;
		count++;
	}
	for (int i = 0; i < count ; i++)
	{
		sum = sum + arr[i] * pow(16, i);
	}
	printf("%d", sum);
}
