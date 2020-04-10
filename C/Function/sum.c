#include <stdio.h>

int array_sum(int *p, int n);
int main(int argc, char *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int sum = 0;
	sum = array_sum(a, sizeof(a)/sizeof(int));
	printf("sum is %d\n",sum);
	return 0;
}

int array_sum(int *p, int n)
{
	int sum1 = 0;
	for(int i = 0; i < n; i++)
	{
		sum1 = sum1 + *(p + i);
	}
	return sum1;
}
