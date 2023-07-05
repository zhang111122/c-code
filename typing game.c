#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void help(void)
{
	printf("开始打字吧");
}
int main()//我的打字不能实现打一个字检测一次
{
	char str[51]="";
	int count = 0;
	srand(time(NULL));
	while (1)
	{
		help();
		getchar();
		for (int i = 0; i < 50; i++)
		{
			str[i] = rand() % 26 + 'a';
		}
		printf("%s\n", str);
		for (int i = 0; i < 50; i++)
		{
			if (str[i] == getchar())
			{
				printf("%c", str[i]);
				count++;
			}
			else
				printf("_");
		}
		printf("%d", count);
		
	}
	return 0;
}
