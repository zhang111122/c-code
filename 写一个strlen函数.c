#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int mystrlen(char* s)
{
	if (*s == '\0')
		return 0;
	return mystrlen(s + 1) + 1;//当指针指向\0时，说明字符串结束 否则返回自己字符加上指针右移。
}
int main()
{
	char* s = "hello world";
	printf("%d", mystrlen(s));
	return 0;
}