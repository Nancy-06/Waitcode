#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for ( i = 0;  i < row;  i++ )
	{
		//pritnf("  |  |  \n");
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			//pritnf("---|---|---");
			for (j = 0; j < col; j++)
			{
				printf("---", board[i][j]);
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && (x <= row) && y >= 1 && (y <= col))
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("坐标被占用，请重新输入！\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入有误，请重新输入!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
		    break;
		}
	}
}

char ChackWin(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][1] == board[i][2] && board[i][0] != '0')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] == board[2][i] && board[0][i] != '0')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] == board[2][0] && board[0][0] != ' ')
		return board[1][1];
	//平局------判断棋盘是否满了
	if (IsFull(board, row, col) == 1)
	{
         return 'Q';
	}
		//继续
	return 'C';
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
