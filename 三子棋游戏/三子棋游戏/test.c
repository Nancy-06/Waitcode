#define _CRT_SECURE_NO_WARNINGS 1
//������Ϸ���߼�
#include<stdio.h>
#include<stdlib.h>
#include"game.h"
void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = ChackWin(board, ROW, COL);
		if (ret =! 'c')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = ChackWin(board, ROW, COL);
		if (ret = !'c')
			break;
	}
	if (ret = '*')
	{
		printf("����Ӯ��\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret = 'Q')
		printf("ƽ�֣�");
}
void menu()
{
	printf("****************************************\n");
	printf("****************1.play******************\n");
	printf("****************0.exit******************\n");
	printf("****************************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
			printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				game();//����Ϸ
			    break;
			case 0:
				printf("�˳���Ϸ\n" );
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;

		}
	} while (input);
	system("pause");
	return 0;
}