#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void fun(char* arr, int n)
{
	if (n > 0)
	{
		fun(arr + 1, n - 1);
		printf("%c", *arr);
	}
}
int a = 2;
int f(int* a)//函数返回a的值 再自加1
{
	return (*a)++;
}
int main()
{
	int s = 0;
	{
		int a = 5;
		s = s + f(&a);//s的定义在外面 因此s的值可以改变
		printf("%d", a);
	}//a释放
	printf("%d", a);//此时a的值为全局变量2
	s = s + f(&a);//s=5+2
	printf("\n%d %d",s,a);//此时a的值为3
	return 0;
}