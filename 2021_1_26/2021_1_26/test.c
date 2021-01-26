#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "szgame.h"
//int main()
//{
//	int a = 5;
//	int b = 3;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//
void menu()
{
	printf("**************************\n");
	printf("******   1. play     *****\n");
	printf("******   0. exit     *****\n");
	printf("**************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		
		//玩家下棋
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		system("cls");
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);//随机下棋的
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		system("cls");
		DisplayBoard(board, ROW, COL);
	}
	system("cls");
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == 'Q')
		printf("平局\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
//int  geti(int i)
//{
//	int num = 0;
//	while (i)
//	if ((i&1) == 1)
//	{
//		i=i >> 1;
//		num++;
//	}
//	else
//	{
//		i = i >> 1;
//	}
//	return num;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int a=geti(i);
//	printf("%d", a);
//	return 0;
//}
//geti(int i)
//{
//	for (int n = 31; n >= 1; n -= 2)
//	{
//		printf("%d ", (i>> n) & 1);
//	}
//	printf("\n");
//
//	for (int n= 30; n >= 0; n -= 2)
//	{
//		printf("%d ", (i >> n) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	geti(i);
//	return 0;
//}
//int getab(int a, int b)
//{
//	int num = 0;
//	a = a^b;
//	while (a != 0)
//	{
//		if ((a & 1) == 1)
//		{
//			a = a >> 1;
//			num++;
//		}
//
//		else
//		{
//			a = a >> 1;
//		}
//	}
//	return num;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int i=getab(a, b);
//	printf("%d\n", i);
//	return 0;
//
//}