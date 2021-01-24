#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void  reverse_string(char* arr)
//{
//	int a = strlen(arr);
//	char num1 = *arr;
//	*arr = *(arr + a - 1);
//	*(arr + a - 1) = '\0';
//	
//    if(strlen(arr+1)>=2)
//	   reverse_string(arr + 1);
//
//	*(arr + a - 1) = num1;
//
//	int i = 0;
//	for (i = 0; i <= a; i++)
//		printf("%c ", arr[i]);
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	
//
//	return 0;
//}

//int DigitSum(int n)
//{	
//	if (n > 9)
//	{
//		return DigitSum(n / 10)+n%10;			     
//	 }
//	else
//	  return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=  DigitSum(n);
//	printf("%d ", ret);
//	return 0;
//}
#include <math.h>
//double pow(double n, double k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k >= 1)
//	{
//		return n*pow(n, k - 1);
//	}
//}
//int main()
//{
//	double  n = 0, k = 0;
//	scanf("%f%f", &n,&k);
//	double a=pow(n, k);
//	printf("%.2f",a );
//	return 0;
//}
//mai(int n)
//{
//			int a = 1;
//			int b = 1;
//			int c = 1;
//		
//			while (n>2)
//			{
//				c = a + b;
//				a = b;
//				b = c;
//				n--;
//			}
//			return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=mai(n);
//	printf("%d ", a);
//	return 0;
//
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void  init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] =0;
//	}
//}
//reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int a = 0;
//		a = arr[right];
//		arr[right] = arr[left];
//		arr[left] = a;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//}
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int arr1[5] = { 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i<5; i++)
	{
		int tmp = arr[i];
		arr[i] = arr1[i];
		arr1[i] = tmp;
	}

		for (i = 0; i<5; i++)
		{
			printf("%d ", arr[i]);
		}
	return 0;
}