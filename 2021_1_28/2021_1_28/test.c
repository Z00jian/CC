#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//void  myh(int *arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(arr + i));
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	myh(arr);
//	return 0;
//}

//


//int add(int i)
//{
//	int count = 0;
//	int n = 0;
//	int a = 0;
//	for (a = 0; a < 5;a++)
//	{
//		n= n * 10 + i;
//		count += n;
//	}
//	return count ;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int num =add(i);
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i<n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i<=999999; i++)
//	{
//		int a = 1;
//		int b = i;
//		double sum = 0;
//		while (b/ 10)
//		{
//			a++;
//			b= b / 10;
//		}
//		 b = i;
//		
//		while (b)
//		{
//			sum += pow(b % 10, a);
//			b = b / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		double sum = 0;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int m = 0;
//	int p = 0;
//	int s = 0;
//	scanf("%d", &m);
//	p = m;
//	s = m;
//
//	while (s>1)
//	{
//		p += s / 2;
//		s = s/ 2 + s % 2;
//	}
//	printf("%d", p);
//	return 0;
//}

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i<line; i++)
	{
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i<line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}