#define  _CRT_SECURE_NO_WARNINGS 1
//ÄæÐò´òÓ¡Êý×é
#include <stdio.h>
void reverse(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		for (i = 0; i < sz; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}

}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 2,5,7,9,3,4,6,1,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);

	reverse(arr, sz);
	print(arr, sz);
	return 0;
}













