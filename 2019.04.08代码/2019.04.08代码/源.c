//#define _CRT_SECURE_NO_WARNINGS 1
//1.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//2.日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//1.
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1;D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((B == 2 && A != 3) || (B != 2 && A == 3) == 1)
//						{
//							if ((B == 2 && E != 4) || (B != 2 && E == 4) == 1)
//							{
//								if ((C == 1 && D != 2) || (C != 1 && D == 2) == 1)
//								{
//									if ((C == 5 && D != 3) || (C != 5 && D == 3) == 1)
//									{
//										if ((E == 4 && A != 1) || (E != 2 && A == 1) == 1)
//										{
//											if (A != B&&A != C&&A != D&&A != E&&B != C&&B != D&&B != E&&C != D&&C != E&&D != E)
//											{
//												printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//设置1为凶手，0不是凶手
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3) && a + b + c + d== 1)
//					{
//						printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//3.
//#include<stdio.h>
//#include<stdlib.h>
//int main ()
//{
//	int data[20][20] = { 0 };
//	data[0][0] = 1;
//	int i, j, n = 10;
//	for ( i = 1; i < n; i++ )
//	{
//		data[i][0] = 1;
//		{
//			for (j = 1; j <= i - 1; j++)
//			{
//				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
//			}
//			data[i][j] = 1;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j =0; j <= i; j++)
//		{
//			printf("%-5d", data[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
