#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	
	char c;
	int countnum = 0;
	int countelse = 0;
	int countc = 0;
	while ((c = getchar()) != '\n')//关键从键盘读入字符时一定要加上外层括号
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')//字符是字母
			countc++;
		else if (c >= '0' && c <= '9')//字符是数字
			countnum++;
		else
			countelse++;
	}
	printf("%d %d %d", countnum, countc, countelse);
	return 0;
}