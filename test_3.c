#define  _CRT_SECURE_NO_WARNINGS 1
//获取一个整数的二进制位的所有偶数位和奇数位
#include <stdio.h>
int main()
{
	int a = 9999;
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	return 0;
}













