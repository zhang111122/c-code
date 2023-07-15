#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
long int fun(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fun(n - 1) + fun(n - 2);
}
int main()
{
	long int f1, f2;
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n+1; i++)
	{
		printf("%10d", fun(i));
		if (i % 8 == 0)
			printf("\n");
	}
	return 0;
}