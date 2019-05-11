#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int  i, j;
	for ( i = 1; i <= 7; i++ )
	{
		for (j = 1; j <= (i * 2 - 1); j++)
		{
			printf("*");
		}

	printf("\n");
	}
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= (i * 2 - 1); j++)
		{

			printf("*");
		}

	printf("\n");	
	}
	system ("pause");
	return  0;
}