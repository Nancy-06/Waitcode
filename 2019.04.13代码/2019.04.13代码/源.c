#define _CRT_SECURE_NO_WARNINGS 1
1.
дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
}

2.��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�

3. ���һ��������ÿһλ��

4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7

	   5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�
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
	printf("������һ������");
	scanf("%d", &tmp);
	printf("ż������Ϊ��");
		for (i = 31; i >=1; i -= 2)
		{
		printf("%d", ((tmp >> i) & 1));
		}
		printf("\n");
		printf("��������Ϊ��");
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
	printf("������һ��������");
	scanf("%d", &num);
	printf("���Ķ�����Ϊ��");
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
	printf("��������������");
	scanf("%d%d", &num1, &num2);
	num=CompareBit(num1, num2) ;
	printf("��������λ��ͬ�ĸ���Ϊ��");
	printf("%d\n", num);
	system("pause");
	return 0;
}
https://blog.csdn.net/qq_43669007/article/details/89387054