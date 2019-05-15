#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW  9
#define MAX_COL   9
#define MINE_COUNT  10
void Init(char show_map[MAX_ROW][MAX_COL],
	char mine_map[MAX_ROW][MAX_COL])
{
	for (int row = 0; row < MAX_ROW; ++row)
	{
		for (int col = 0; col < MAX_ROW; ++col)
		{
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW; ++row)
	{
		for (int col = 0; col < MAX_ROW; ++col)
		{
			mine_map[row][col] = 0;
		}
	}
	//随机生成10个数作为雷
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		//生成一组随机数
		int  row = rand() % MAX_ROW;
		int  col = rand() % MAX_COL;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] == '1';
		--mine_count;
	}
}
void PrintfMap(char map[MAX_ROW][MAX_COL])
{
	//1.先打印第一行坐标
	printf(" |");
	for (int col = 0; col < MAX_COL; ++col)
	{
		printf("%d ", col);
	}
	printf("\n");
	//2.打印一行分隔符
	for (int col = 0; col < MAX_COL; ++col)
	{
		printf("---");
	}
	printf("\n");
	//3.按照每行来分别打印

	for (int row = 0; row < MAX_ROW; ++row)
	{
		printf("%d|", row);
		for (int col = 0; col < MAX_COL; ++col)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col)
{
	//判断当前位置(row，col),周围8个格子有几个雷
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1')
	{
		++count;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1')
	{
		++count;
	}
	if (row - 1 >= 0 && col + 1 < MAX_COL&&mine_map[row - 1][col + 1] == '1')
	{
		++count;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1')
	{
		++count;
	}
	if (col + 1 < MAX_COL&&mine_map[row][col + 1] == '1')
	{
		++count ;
	}	
	if (row +1 <MAX_ROW && col -1>=0 &&mine_map[row -+1][col - 1] == '1')
	{
		++count;
	}
	if (row + 1 < MAX_ROW&&mine_map[row+1][col ] == '1')
	{
		++count;
	}
	if (row+1<MAX_ROW&&col + 1 < MAX_COL&&mine_map[row+1][col + 1] == '1')
	{
		++count;
	}
	show_map[row][col] = count + '0';
}


void Game()
{
	//1.创建两个二维数组
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	//2.对二维数组初始化
	Init(show_map, mine_map);
	int blank_count = 0;
	while (1)
	{
		//3.打印地图
		system("cls");
		PrintfMap(show_map);
		//4.让用户输入一组坐标,并进行校验
		printf("让用户输入一组坐标(row,col) :");
		int row = 0;
		int  col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			printf("您的输入有误，请重新输入！");
			continue;
		}
		if (show_map[row][col] != '*')
		{
			//这个位置已经被翻开
			printf("您输入的位置已经被翻开，请重新输入！\n");
			continue;
		}
		//5.判断是否踩雷
		if (show_map[row][col] == '1')
			//踩雷了
		{
			printf("游戏结束!\n");
			break;
		}
		++blank_count;
		//6.是否游戏胜利
		if (blank_count == MAX_ROW * MAX_COL - MINE_COUNT)
		{
			printf("恭喜你，扫雷成功！\n");
			break;
		}
		//7.更新地图，把当前位置变成一个数字
		UpdateShowMap(show_map, mine_map, row, col);
	}
}

int menu ( )
{
	printf("**********************************************\n");
	printf("****************1.开始游戏********************\n");
	printf("****************0.游戏结束********************\n");
	printf("**********************************************\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main( )
{
	srand((unsigned int) time(0));
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			Game ( ) ;
		}
		else if (choice == 0)
		{
			printf("游戏结束，再见！\n");
			break;
		}
		else
		{
			printf("输入有误！\n");
		}
	}
	system("pause");
	return 0;
}