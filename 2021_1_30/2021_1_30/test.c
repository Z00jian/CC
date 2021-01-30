#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>

//char* my_strcpy( char *a, const char*ret)
//{
//	char*arr = a;
//	assert(ret != NULL);
//	assert(a != NULL);
//	while (*a++ = *ret++)
//	{
//		;
//	}
//	return arr;
//}
//int main()
//{
//	char ret[] = "abcdef";
//	char arr[10] = { 0 };
//	my_strcpy(arr, ret);
//	printf("%s\n", arr);
//	return 0;
//}
//int my_strlen(char *arr)
//{
//	int num = 0;
//	int i = 0;
//
//	while ((*(arr+i)) != '\0')
//	{
//		i++;
//		num++;
//	}
//	return num;
//}
//int main()
//{
//	char arr[] = "abcd56789";
//	int ret =my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}
void Jo(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int sum = 0;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			sum = arr[left];
			arr[left] = arr[right];
			arr[right] = sum;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = 11;
	Jo(arr,sz);
	int i = 0;
	for (i = 0; i < 10; i++)
		//char ret[] = "abcdef";
	{
		printf("%d ", arr[i]);
	}
	//printf("%s", ret);
	return 0;//012345678910
}