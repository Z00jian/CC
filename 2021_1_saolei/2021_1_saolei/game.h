#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define EASY_COUNT 10//�׵ĸ���

#define ROW 9  //������������
#define COL 9  //

#define ROWS ROW+2  //Ϊ�˷�ֹ���ʹ��磬��һ����������
#define COLS COL+2

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);//setΪ0

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
// mine - ����׵���Ϣ
// row 
// col
// count - ���õ��׵ĸ���
//
void SetMine(char mine[ROWS][COLS], int row, int col, int count);


//����
void FineMine(char mine[ROWS][COLS],
	char show[ROWS][COLS],
	int row,
	int col);