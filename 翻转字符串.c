#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//本关任务（习题12.3）：将输入的一行字符串逆序输出。
//例如，输入string，则输出gnirts。将逆序输出用递归函数实现。
void reverse(char* s)//递归函数 如果指针没有指向\0  那么先翻转输出后几位 再输出第一位依次即可
{
	char c;
	if (*s != '\0')
	{
		reverse(s+1);
		printf("%c", *s);
	}
}
void reverse2(char* s)//数组法   只要知道输入了几个字符 倒着输出即可
{
	
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (int j = i; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
}
int main()
{
	char s[20];//char*s就不行               字符指针位置不确定，如果开辟null附近的地址 可能会覆盖一些重要数据 因此程序无法进行。所以读入字符串可以用字符数组
 	scanf("%s", s);
	reverse2(s);
	return 0;
}