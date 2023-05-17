#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr1[i] = 1 + i;        //f10   f5
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}










