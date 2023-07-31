#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int fun(int x, int y)
{
    if (x < y)
    {
        int t = x;
        x = y;
        y = t;
    }
    int r;
    while (r = x% y)
    {
        x = y;
        y = r;
    }
    return y;
}
int main()
{
	  
    char i, j;
    printf("请输入第一个字母:\n");
    scanf("%c", &i);
    getchar();//scanf("%c",&j);的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个getchar() 吃掉换行符
    switch (i)//自己对scanf的理解 输入字符之后 需要按下回车 才能结束scanf 但是 回车是\n字符需要吃掉
    {
    case 'm':
        printf("monday\n");
        break;
    case 'w':
        printf("wednesday\n");
        break;
    case 'f':
        printf("friday\n");
        break;
    case 't':
        printf("请输入下一个字母\n");
        scanf("%c", &j);//这里不需要吃掉了因为之后程序结束掉了   如果去掉getchar的后果  
        //输入t和回车之后进入t 自动读取、n字符 发现没有语句 继续向下执行 进入s 在输入u此时直接成为Sunday 
        if (j == 'u') { printf("tuesday\n"); break; }
        if (j == 'h') { printf("thursday\n"); break; }
    case 's':
        printf("请输入下一个字母\n");
        scanf("%c", &j);
        if (j == 'a') { printf("saturday\n"); break; }
        if (j == 'u') { printf("sunday\n"); break; }
    default:
        printf("error\n"); break;
    }
	return 0;
}