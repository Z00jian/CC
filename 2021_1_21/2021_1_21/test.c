#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int num1 = 0;
//	int num2 = 0;
//	while ((scanf("%d %d %d", &num, &num1, &num2)) != EOF)
//	{
//		int max = num>num1 ? num : num1;
//		max = num2>max ? num2 : max;
//		printf("%d", max);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int ch = 0;
//	while (scanf("%c", &ch) != EOF)   
//	{
//		if (toupper(ch) == ch);       
//		{
//			putchar(tolower(ch));
//			continue;
//		}
//		if (tolower(ch) == ch)
//		{
//			putchar(toupper(ch));
//			
//		}
//
//	}
//		
//		return 0;
//
//}
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	char ch = '0';
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == '\n')//���Իس�
//			continue;
//		if (ch >= 'A' && ch <= 'Z')
//			putchar(toupper(ch));
//		else if (ch >= 'a' && ch <= 'z')
//			putchar(tolower(ch));
//		else
//			printf("%c\n", ch);
//	}
//	return 0;
//}
void  game()
{
	int num=0;
	int red = rand() % 100 + 1;

	while (1)
	{
		printf("�������\n");
		scanf("%d", &num);
		if (num > red)
		{
			printf("�´���\n");
		}
		else if (num < red)
		{
			printf("��С��\n");
		}
		else
		{
			printf("������\n");
			break;
		}
	}

}
int main()
{
	srand((int)time(0));
	int i = 0;
	do
	{
		
		printf("************\n");
		printf("***1.play***\n");
		printf("***0.esc****\n");
		printf("************\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;

		default:printf("�������");
			break;
		}
	} while (i);
	return 0;

}