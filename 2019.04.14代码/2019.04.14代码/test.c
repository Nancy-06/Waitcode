#define _CRT_SECURE_NO_WARNINGS 1
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
1.
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)
		{
			printf( "1" );
		}
		else
		{
			printf("0");
		}			
	}
	printf("\n");
}
int main()
{
	unsigned int value = 0;
	printf("请输入一个数：");
	scanf("%d", &value);
	printf("翻转后的二进制数为：");
	reverse_bit(value);
	system("pause");
	return 0;
}
2.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m = 0;
	int n = 0;
	int avg = 0;
	printf("请输入两个数：");
	scanf("%d%d", &m, &n);
	avg = (m + n) >> 1;
	printf("两个数的平均值为：");
	printf("%d\n", avg);
	system("pause ");
	return 0;
}
3.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[7] = { 0 };
	int i = 0;
	int sz = 0;
	int num = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入一组数据：");
	for (i = 0; i < sz; i++)
	{
        scanf("%d", &arr[i]);
	}
	for (i = 0; i < sz; i++)
	{
		num = num^arr[i]; 
	}
	printf("这个数字为：");
	printf("%d\n", num);
	system("pause");
	return 0;
}
4.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *str)
{
	char *p;
	char tmp[256] = { 0 };
	while (p = strrchr(str, ' '))
	{
		*p = 0;
		strcat(tmp, p + 1);
		strcat(tmp, " ");
	}
	strcat(tmp, str);
	strcpy(str, tmp);
}
int main()
{
	char str[] = "student a am i";
	reverse(str);
	puts(str);
	system("pause"); 
	return 0;
}