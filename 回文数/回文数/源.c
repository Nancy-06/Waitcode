#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i;
	int tmp;
	int sum = 0;
	printf("����һ������\n");
	scanf("%d", &n);
	for (i = n; i; i /= 10)//��λ����
	{
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	printf("%d\n", sum);
	if (sum == n)
	{
		printf("������ǻ�������\n");
	}
	else
		printf("��������ǻ�������\n");
	system("pause");
	return 0;
}