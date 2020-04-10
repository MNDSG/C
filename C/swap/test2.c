#include<stdio.h>

int str_fun(char * p);
int main()
{
	int n;
	char s[] = "welcome to shanghai 00777";
	str_fun(s);
	n = str_fun(s);
	printf("n=%d\n %s\n",n,s);
	return 0;
}
int str_fun(char * p)
{
	int num = 0;
	while(*p != '\0')//or while(*p)
	{
		if(*p <= 'z' && *p >= 'a')
		{
			num++;
			*p -= 32;
		}
		p++;
	}
	return num;
}
