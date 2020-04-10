#include<stdio.h>

int main()
{
	int m = 10;
	int *p;
	int **q;

	p = &m;
	q = &p;
	printf("%p %p\n",p,&m);
	printf("%p %p\n",q,&p);
	printf("%d %d %d %p\n",m,*p,**q,*q);
	return 0;
}
