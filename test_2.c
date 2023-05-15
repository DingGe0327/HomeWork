#define  _CRT_SECURE_NO_WARNINGS 1
//计算一个数里的二进制有多少个1
#include <stdio.h>
int the_num_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 5;
	int count = the_num_1(n);
	printf("%d\n", count);
	return 0;
}









