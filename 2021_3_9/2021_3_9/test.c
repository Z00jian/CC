#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	printf("%d", (*p)[10]);
//	return 0;
//}
//void tst(int **p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	int **pp = &p;
//
//	tst(&p);
//	tst(pp);
//
//}
//void yangHui(int n)
//{
//	int data[30] = { 1 };
//
//	int i, j;
//	printf("1\n"); 
//	for (i = 1; i < n; i++)
//	{
//		for (j = i; j > 0; j--)
//		{
//			data[j] += data[j - 1];
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	yangHui(a);
//	return 0;
//}
//int main()
//{
//	int murder[4] = { 0 }; 
//	int i;
//	for (i = 0; i < 4; i++) 
//	{
//		murder[i] = 1; 
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3)
//		{
//			break; 
//		}
//		murder[i] = 0; 
//	}
//	putchar('A' + i); 
//	return 0;
//}
void swapArgs(int * a, int * b) //��������
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void diveRank(int * p, int n)
{
	if (n >= 5) //��ʱ��nҲ����������ѭ�������ġ�
	{
		if ((p[1] == 2) + (p[0] == 3) == 1 && //B�ڶ����ҵ���
			(p[1] == 2) + (p[4] == 4) == 1 && //�ҵڶ���E����
			(p[2] == 1) + (p[3] == 2) == 1 && //�ҵ�һ��D�ڶ�
			(p[2] == 5) + (p[3] == 3) == 1 && //C����ҵ���
			(p[4] == 4) + (p[0] == 1) == 1)   //�ҵ��ģ�A��һ
			//���ڴ�ʱ��ִ�е�ȫ���У����Բ���Ҳʡ�ˡ�
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", p[i]);
			}
			putchar('\n');
		}
		return;
	}

	int i;
	for (i = n; i < 5; i++) //����ݹ鷽ʽ������˶�1~5��ȫ���У������ǴӺ���ǰ��ͣ��ִ�н��������Բο��Ľ�����ԭ���룬������ݹ����д�س�ѭ���󣬿��Ը��õ���⡣
	{
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}

int main()
{
	int p[5] = { 1, 2, 3, 4, 5 }; //��Ȼ������ȫ���У����Գ�ֵ������á�

	diveRank(p, 0);

	return 0;
}