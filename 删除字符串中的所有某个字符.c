#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//删除字符串中的所有某个字符
void delete_x(char* arr, char c)
{
    char b[20];
    int cont = 0;
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != c)
        {
            b[cont] = arr[i];
            cont++;
        }
    }
    b[cont] = '\0';
    strcpy(arr, b);
 }
int main()
{
    char arr[20];
    gets(arr);
    char c;
    scanf("%c", &c);
    delete_x(arr, c);
    printf("%s", arr);
}