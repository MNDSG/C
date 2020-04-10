#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
	int a = 10;
	int b = 20;
	printf("before change:a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("after change:a=%d, b=%d\n", a, b);

}

void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

