#include<stdio.h>

void del_space(char * s1);
int main()
{
	char s[] = "ab c d    e  f   g";
	printf("before:%s\n",s);
	del_space(s);
	printf("after:%s\n",s);
	return 0;
}
void del_space(char * s1)
{
	char *p = s1;
	int n = 0;
	while(*p)
	{
		if(*p != ' ')
		{
			n++;
			s1[n] = *p;
		}
		else
		{
			p++;
		}
	}
	s1[n] = '\0';
}
