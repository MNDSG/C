#include<stdio.h>

int main()
{
/*	int a[5] = {1,2,3,4,5};

	printf("%p \n%p\n",&a[1],&a);
*/
	int a[5] = {1,2,3,4,5};
	int *p = (int *)(&a[1] + 1);
	printf("%d %d",*(a+1),*(p-1));

	int *q = a;
	printf("%d %d",*(a+1),*(q+1));
	return 0;
}
