#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i;
	int tmp;
	int sum = 0;
	printf("输入一个数：\n");
	scanf("%d", &n);
	for (i = n; i; i /= 10)//数位遍历
	{
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	printf("%d\n", sum);
	if (sum == n)
	{
		printf("这个数是回文数。\n");
	}
	else
		printf("这个数不是回文数。\n");
	system("pause");
	return 0;
}