#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{

//int ch = 0;


//while ((ch = getchar()) != EOF)
//
//
//
//{
//	putchar(ch);
//}
//
//	
//
//return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i == 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a<c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//     printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	for (a = 1; a < 100; a++)
//	if (a%3==0)
//	{
//		printf("%d  ", a);
//	}	
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	if (a == b)
//		printf("%d", a);
//	if (a > b)
//	{
//		if (a%b == 0)
//			printf("%d", b);
//	}
//	if (a<b)
//	{
//		if (b%a == 0)
//			printf("%d", a);
//	}
//
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		for (c = b; c > 0; c--)
//		if (a%c == 0 && b%c == 0)
//		{
//			printf("%d", c);
//			break;
//		}
//	}
//	if (a < b)
//	{
//		for (c = a; c > 0; c--)
//		if (a%c == 0 && b%c == 0)
//		{
//			printf("%d", c);
//			break;
//		}
//	}
//	return 0;
//
//}
//int  main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("%d ", year);
//	}
//		
//	return 0;
//}

//int main()
//{
//	int i=0,s=0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			s++;
//		if (i/10==9)
//			s++;
//	}
//	printf("%d", s );
//	return 0;
//}
//int main()
//{
//	int a;
//	for (a = 1; a <= 100;a++)
//
//
//	return 0;
//}
//int main()
//{
//	int a;
//	for (a = 101; a < 200; a++)
//	{
//		int b = 0;
//		for (b = 2; b < a; b++)
//		{
//			if (a%b == 0)
//				break;
//		}
//		if (a == b)
//			printf("%d ", a);
//
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%d\t", j, i, i*j);
//		
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 0;
//	scanf_s("%d", &key);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max = %d ", max);
//	return 0;
//}

///int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//int max = 0;
//
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//
//	 int max = arr[0];
//	for (i = 1; i<10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
// printf("max = %d\n", max);
//	return 0;
//}
int main()
{
	int i, o = 1;
	float num=0.0;
	for (i = 1; i <= 100; i++)
	{
		num = num + o*1.0 / i;
		o = -o;
	}
		printf("%f", num);
	return 0;
}