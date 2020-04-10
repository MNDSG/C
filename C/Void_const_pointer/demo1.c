#include<stdio.h>

int main()
{
	int m = 10;
	double n = 3.14;
	void *p,*q;

	p = (void *)&m;
	q = (void *)&n;

	printf("%d %d\n",m,*(int *)p);
	printf("%.2lf %.2lf\n",n,*(double *)q);
	return 0;
}
