#define _CRT_SECURE_NO_WARNINGS 1
//测试游戏的逻辑
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
		printf("电脑赢！\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢！\n");
	}
	else if (ret = 'Q')
		printf("平局！");
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
			printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				game();//玩游戏
			    break;
			case 0:
				printf("退出游戏\n" );
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;

		}
	} while (input);
	system("pause");
	return 0;
}