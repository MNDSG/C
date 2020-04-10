#include<stdio.h>

int main()
{
	int a[] = {2,4,6,8,10};
	int i,j;
	void *p;

	p = a;
	j = sizeof(a)/sizeof(int);

	for(i=0;i<j;i++)
		printf("%d",*((int *)p + i));
	puts("");
	return 0;
}
