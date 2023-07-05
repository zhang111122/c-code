#include<stdio.h>
//标准c语言库
//int sum(int i,int a[])//求出数组前i项之和
//{
//	int sum=0;
//	for (int j = 1; j <= i; j++)
//	{
//		sum = sum + a[j] * a[j] * a[j];
//	}
//	return sum;
//}
//
//int main()
//{
//	for (int j = 1; j <= 1000; j++)//对于1到1000这些数
//	{
//		int a[10] = { 0 };
//		int i = 1;
//		int n = j;
//		while (n != 0)//分离出每一位存到数组中/                             /关键是不能改变j的值 因为j正在循环改变之后进入死循环
//		{
//			a[i] = n% 10;
//			n= n/ 10;
//			i++;
//		}
//		if (sum(i-1,a) == j)  
//			printf("%d\n", j);
//	}
//	return 0;
//}




int main()
{
	// char a[3][3][3] = {0};
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		for (int k = 0; k < 3; k++)
	//			printf("%d\n", &a[i][j][k]);//说明按照 0 0 0 /   0 0 1/0 0 2 /0 1 0 /0 1 1 /
	//	}
	//}
	char ch[] = { 'a','b','\0'};
	printf("%s", ch);
	return 0;
}



//
//今天最大的两个收获是第一个是
//for循环内 定义变量 每一次循环都会释放变量
//for循环第一个语句定义变量 所有循环结束之后才会释放变量
//
//第二是
//for循环控制次数时不能在内部改变循环变量的值 否则会导致死循环等情况 如水仙花数
