#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>

//int cmp_int(const void* e1, const void* e2)//�ȽϺ���
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void print_arr(int arr[], int sz)//��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void _swap(char* buf1, char* buf2, int width)//��������
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//struct Stu
//	{
//		char name[20];
//		int age;
//	};
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)//�Ƚ������С
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void*e2)//�Ƚ����ִ�С
//{
//	return strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))//ģ��ð�ݺ���
//{
//	size_t i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����2��Ԫ�صıȽ�
//			//base[j] base[j+1] 
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//void test3()
//{
//	//qsort ������������
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	//ʹ��qsort��������ṹ��
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//�������������򣿻��ǰ������䣿
//	//������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//����������
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test4();
//	//test3();
//	return 0;
//}

int cmp_int(const void* _a, const void* _b)
{
	int* a = (int*)_a;    //ǿ������ת��
	int* b = (int*)_b;
	return *a - *b;
}

int main()
{

int num[100];

qsort(num, 100, 4, cmp_int);
return 0;
}