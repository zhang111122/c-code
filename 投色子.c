#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//想要使用rand()函数产生一个（a，b）区间的数num，可以使用以下两种方式：
//（1）num = a + (b - a + 1) * rand() / (RAND - MAX + 1.0)；
//（2）a + rand % (b - a + 1)；
int main()
{
	
	srand(time(NULL));
	int x;
	int y;
	int sum;
	x = (int )rand() % 6 + 1;
	y = (int)rand() % 6 + 1;
	sum = x + y;//第二轮之后的结束条件
	//本关任务（习题5.1）：模拟掷双骰子游戏，游戏规则：每轮投两次骰子，取两次的和，第一轮若和为7或11则获胜，游戏结束。
	if (x + y == 7 || x + y == 11)
	{
		printf("succcess");
		printf("x=%d y=%d sum=%d", x, y,sum);
		return 0;
	}
	//若和为其他数字，则将第一轮两次骰子点数的和（假定为8）作为自己的点数，
	//继续第二轮，第三轮，……，直到某轮两次骰子点数的和等于该点数（第一轮两次投掷点数和）则获胜，
	//若中间某轮两次投掷骰子点数的和为7，则输掉游戏。
	
	int count = 1;
	while(1)//这里写错了找了半天错误 结果是while拼错了 多写了一个字母 太抽象了
	{//使用死循环的原因 循环次数可能很多 只需要最后用break或者return 结束程序即可
		int x = (int)rand() % 6 + 1;//局部变量 每次循环结束释放
		int y = (int)rand() % 6 + 1;
		count++;
		if (x + y == sum)//求出两个随机数的和
		{
			printf("%d success x=%d y=%d sum=%d", count, x, y, x + y);
			return 0;
		}
		if (x + y == 7)
		{
			printf("%d fail x=%d y=%d sum=%d", count, x, y, x + y);
			return 0;
		}
	}
 }