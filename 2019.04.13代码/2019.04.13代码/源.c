#define _CRT_SECURE_NO_WARNINGS 1
1.
写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}

2.获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。

3. 输出一个整数的每一位。

4.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7

	   5.写博客总结C语言操作符，博客链接发给我，并分享到群里。
1.
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value)
{
	int i = 0;
	int count = 0;
		for (i = 0; i < 32; i++)
		{
			if (((value>>i)&1) == 1)
				count++;
		}
		return count;
}
int main()
{
	int value = 0;
	int j = 0;
	scanf("%d", &value);
	j = count_one_bits(value);
	printf("%d\n", j);
	system("pause");
	return 0;
}
2.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int tmp = 0;
	int i = 0;
	printf("请输入一个数：");
	scanf("%d", &tmp);
	printf("偶数序列为：");
		for (i = 31; i >=1; i -= 2)
		{
		printf("%d", ((tmp >> i) & 1));
		}
		printf("\n");
		printf("奇数序列为：");
		for (i = 30; i >=0; i -= 2)
		{
			printf("%d", ((tmp >> i) & 1));
		}
		printf("\n");
	system("pause");
	return 0;
}
3.
#include<stdio.h>
#include<stdlib.h>
void CountOne(int num)
{
	int i = 0;
	for (i = 31; i >= 0; i--)
	{
		if (((num >> i) & 1) ==1)
		{
			printf(" 1");
		}
		else
		{
			printf(" 0");
		}
	}
}
int main()
{
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	printf("它的二进制为：");
	CountOne( num);
	system("pause");
	return 0;
}
4.
#include<stdio.h>
#include<stdlib.h>
int CompareBit(int num1, int num2)
{
	int i = 0;
	int count=0;
	for (i = 0; i < 32; i++)
	{
		if (((num1 >> i) & 1) != ((num2 >> i) & 1))
			count++;
	}
	return count;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num = 0;
	printf("请输入两个数：");
	scanf("%d%d", &num1, &num2);
	num=CompareBit(num1, num2) ;
	printf("二进制中位不同的个数为：");
	printf("%d\n", num);
	system("pause");
	return 0;
}
https://blog.csdn.net/qq_43669007/article/details/89387054