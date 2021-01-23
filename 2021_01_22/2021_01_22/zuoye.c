#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b)!=EOF)
//	{
//		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		{
//			switch (b)
//			{
//			case 2:
//				printf("29\n");
//				break;
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("31\n");
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30\n");
//			default:;
//			}
//		}
//		else
//		{
//			switch (b)
//			{
//			case 2:
//				printf("28\n");
//				break;
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("31\n");
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30\n");
//			default:;
//			}
//		}
//	}
//	
//	return 0;
//}
#include <math.h> 
//int  add(int i)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(i); a++)
//	{
//		if (i%a == 0)
//			return 0;
//		
//	}
//	return i;
//  
//	
//}
//int main()
//{
//    int i=0 ,ret= 0;
//	for (i = 100; i < 200; i++)
//	{
//		ret = add(i);
//		if (ret)
//		{
//			printf("%d  ", ret);
//		}
//	}//scanf("%d", &i);
//	
//	return 0;
//}
//int add(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//
//	int year = 0,ret=0;
//	scanf("%d", &year);
//	ret =add(year);
//	//printf("%d", ret);
//	if (year==1)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//
//}
//void add(int *a, int *b)
//{
//	int z = 0;
//	z = *a;
//	*a = *b;
//	*b = z;
//}
//int main()
//{
//	int ret = 0;
//	int a=0, b=0;
//	scanf("%d%d", &a, &b);
//	add(&a,&b);
//	printf("%d %d", a,b);
//	return 0;
//}
//void  add(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n：");
//	scanf("%d", &n);
//	add(n);
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0;
//	int arr[7] = { 0 };
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d", &arr[i]);
//		a += arr[i];
//	}
//	int max = 0, min = 100;
//	for (i = 0; i<7; i++)
//	{
//		if (arr[i]<min) min = arr[i];
//	}
//
//	for (i = 0; i<7; i++)
//	{
//		if (arr[i]>max) max = arr[i];
//	}
//	double num = 0;
//	num = (a - max - min) / 5.0;
//	printf("%.2f\n", num);
//
//	return 0;
//}
//int   add(int a)
//{
//	a += 3;
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = 3;
//	add(a);
//	return 0;
//}