#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void add(int num)
//{
//	if (num > 9)
//	{
//		add(num / 10);
//		
//	}
//		
//	printf("%d ",num%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	add(num);
//	return 0;
//}
//int N(int n)
//{
//	if (n<=1)
//
//		return 1;
//	
//	else
//		return n*N(n - 1);
//
//}
//int N(int n)
//{
//	int i = 0,num=1;
//	if (n <= 1)
//		return 1;
//	else
//	{
//		for (i = 1; i <= n; i++)
//			num =num* i;
//
//	}
//	return num;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret =N(n);
//	printf("%d", ret);
//
//	return 0;
//
//}
//int add(int *arr)
//{
//	int a = 0;
//	if (*arr != '\0')
//	{
//	  a = 1 + add(arr + 1);
//	}
//	return a;
//
//}
//int add(int *arr)
//{
//	int i = 0;
//	while (*arr != '\0')
//	{
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = add(arr);
//	printf("%d ", ret);
//	return 0;
//}
//
