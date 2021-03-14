#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int time_(int n)
{
	if (n<12)
	{
		return 2;
	}
	else if (n % 12 == 0)
	{
		return (4 * (n / 12) + 2);
	}
	return (4 * (n / 12) + 2 * n % 12);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = time_(n);
	printf("%d", ret);
	return 0;
}