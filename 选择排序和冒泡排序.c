#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void bubble_sort(int arr[], int length)
{
	for (int i = 0; i < length - 1; i++)//冒泡次数 每次将最大的数排到最后 需要排n-1次
	{
		for (int j = 0; j < length - 1 - i;j++)//冒泡范围 下标从0开始到length-1-i
		{
			if (arr[j] > arr[j + 1])//如果相邻两个数的顺序反了那么就反过来
			{
				int t;
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}
void choose_sort(int arr[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i; j <= length - 1; j++)
		{
			if (arr[i] > arr[j])
			{
				int t;
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}
void travese_arr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		printf("%d", arr[i]);
}
int main()
{
	int arr[10] = {1,4,2,3,4,5,3,3,3,5};
	bubble_sort(arr, 10);
	travese_arr(arr,10);
	return 0;
}