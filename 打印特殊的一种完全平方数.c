#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//任务描述：输入一个整数n（n<=10000），打印n以内所有这样的完全平方数y：y=a²=b²x10+c²。例如，361=19²=6²x10+1²，则361是这样的完全平方数。
int IsSqare(int x)//判定是否是完全平方数  还可以使用遍历 所有比它小的数平方能否等于本身 
{
	if (x == (int )sqrt(x) *(int ) sqrt(x))//注意sqrt的输出值是浮点型 必须强制转换一下
		return 1;
	return 0;
}
int main()
{
	int n;
	
	scanf("%d",&n);//读一个数
	for (int i = 1; i <= n; i++)//遍历从1到n的所有数
	{
		if (IsSqare(i) == 1)//如果是完全平方数，再进行以下的判定
		{
			int a = sqrt(i);//取出a a的层次是第一层循环
			for (int b = 1; b <= i; b++)//遍历b的值 从小到大遍历
			{
				int flag = 0;//定义一个flag标志 决定跳出第二层否 因为只需要一个较小的b
				for (int c = 1; c <= i; c++)
				{
					if (i == 10 * b * b + c * c)
					{
						printf("%d=%d的平方=10*%d的平方+%d的平方\n", i, a, b, c);
						flag = 1;
						break;//跳出一层
					}						
				}
				if (flag == 1)
					break;//再跳出
				
			}
		}
	}
	return 0;
}



//我写错的地方 1：判断完全平方的函数出错 原因不知道返回值是浮点型 2：没有写跳出break第二层导致不符合题意 3：没有确定一个flag导致直接跳出 打印不了任何东西