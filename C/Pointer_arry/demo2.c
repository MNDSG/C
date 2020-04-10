#include<stdio.h>

int main()
{
	int a[2][3] = {{1,3,5},{2,4,6}};
	int *p[2];
	
	p[0] = a[0];
	p[1] = a[1];

	printf("%d %d\n",*p[0],*(p[0]+1));
	
	return 0;
}
