#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int  main()
//{
//	unsigned int a = -5;
//	printf("%u", a);
//
//	return 0;
//}
//1111  a
//1110  a-1
//1110  a
//1101  a-1
//1100  a



//int add(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int num=add(a);
//	printf("%d", num);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 10 ,20};
//	int *p = arr;
//	printf("%d", *(p+1));
//	return 0;
//}
//int main()
//{
//    char a = -64;
//	printf("%d", a);
//	100000000000001000000
//	111111111111110111111
//	111111111111111000000
//	111111111111111000000
//	111111111111110111111
//	100000000000001000000
//		
//
//	11111111
//	110000000
//	return 0;
//}

int main()
{
	int a = 9;
	float *p = (float*)&a;
	printf("%d", *p);

	return 0;
}