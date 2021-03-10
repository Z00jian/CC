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
void swapArgs(int * a, int * b) //交换函数
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void diveRank(int * p, int n)
{
	if (n >= 5) //此时的n也是用来控制循环层数的。
	{
		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
			(p[4] == 4) + (p[0] == 1) == 1)   //我第四，A第一
			//由于此时是执行的全排列，所以查重也省了。
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
	for (i = n; i < 5; i++) //这个递归方式就完成了对1~5的全排列，方法是从后向前不停的执行交换。可以参考改进二和原代码，将这个递归程序写回成循环后，可以更好的理解。
	{
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}

int main()
{
	int p[5] = { 1, 2, 3, 4, 5 }; //当然由于是全排列，所以初值必须给好。

	diveRank(p, 0);

	return 0;
}