#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void init(int arr[],int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
		printf("%d", arr[i]);
	}
	printf("\n");
}
void empty(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = '\0';
		printf("%d", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int i = 0;
	int j = sz - 1;
	int tmp = 0;
	while (i<=j)
	{
		tmp =arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		i++;
		j--;
    }
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[10]);
	printf("对数组初始化：\n");
	init(arr,sz);
	printf("逆置数组：\n");
	reverse(arr, sz);
	printf("清空数组：\n");
	empty(arr, sz);
	system("pause");
	return 0;
}