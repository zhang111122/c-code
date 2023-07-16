#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//本关任务（习题5.11）：n0​是一个给定的正整数，对于i = 0，1，2...，定义：
//（1）若ni​是偶数，则ni + 1= ni/ 2；
//（2）若ni​是奇数，则ni + 1​= 3ni​+ 1；
//（3）若ni​是1，则序列结束。
//用该方法产生的数称为冰雹(hailstone)。
//编写产生一些冰雹的程序，程序应该用函数void hailstone(int n)；计算冰雹并显示由n产生的序列。
int main()
{
	int n;
	int count = 0;
	scanf("%d", &n);
	while (n!=1)
	{
		count++;
		printf("%5d", n);
		if (n % 2 == 0)//               本程序所学到的最重要的知识是  彻底搞清楚多个if并列 和if  else的区别
			n = n / 2;                         //  多个if并列 可能都会执行 比如本题 在n变成2时 n先变成1 接着又执行了3n+1 .依照题意 这两步是互斥的 只能执行其中一个
		else
			n = 3 * n + 1;
		if (count % 6 == 0)
			printf("\n");
	}
	/*while (n != 1)
	{
		count++;
		printf("%5d", n);    
	if (count % 6 == 0)  
		printf("\n");       
	if (n % 2 != 0)        
		n = 3 * n + 1;    
	else      
		n = n / 2; 
	}*/
	printf("%5d", n);
	return 0;
}