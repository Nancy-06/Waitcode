#define _CRT_SECURE_NO_WARNINGS 1
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	printf("������һ������");
	scanf("%d", &value);
	printf("��ת��Ķ�������Ϊ��");
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
	printf("��������������");
	scanf("%d%d", &m, &n);
	avg = (m + n) >> 1;
	printf("��������ƽ��ֵΪ��");
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
	printf("������һ�����ݣ�");
	for (i = 0; i < sz; i++)
	{
        scanf("%d", &arr[i]);
	}
	for (i = 0; i < sz; i++)
	{
		num = num^arr[i]; 
	}
	printf("�������Ϊ��");
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