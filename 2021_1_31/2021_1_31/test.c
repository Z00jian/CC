#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	unsigned int a = strlen("abc") - strlen("abcde");
	
		printf("%hhu", a);
	
	return 0;
}