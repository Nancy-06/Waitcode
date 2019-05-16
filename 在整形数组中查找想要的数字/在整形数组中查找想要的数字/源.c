#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int search(int right, int left, int pow[], int p)
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (pow[mid] > p)
		{
			right = mid - 1;
		}
		else if (pow[mid] < p)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int pow[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int right = sizeof(pow) / sizeof(pow[0]) - 1;
	int left = 0;
	int p ;
	printf("请输入要查找的数p：\n");
	scanf("%d",&p);
	int ret=	search(right, left, pow, p);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为：\n", ret);
	}
	system("pause");
	return 0;
}
