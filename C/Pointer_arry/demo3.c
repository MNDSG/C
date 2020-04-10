#include<stdio.h>

int main()
{
	int a[2][3] = {{1,3,5},{2,4,6}};
	int *p[2] = {a[0],a[1]};
	int i,j;
//	p[0] = &a[0][0];
//	p[1] = &a[1][0];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",*(p[i]+j));
		}
		puts("");
	}

//	printf("%d %d\n",*p[0],*(p[0]+1));
	
	return 0;
}
