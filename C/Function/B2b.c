#include <stdio.h>

int str_fun(char *p);

int main(int argc, char *argv[])
{
	char s[] = "welcome to china, 2019000!";
	int num;
	num = str_fun(s);
	printf("num = %d\n", num);
	puts(s);
	return 0;
}

int str_fun(char *p)
{
	int nu = 0;
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
		{
			nu += 1;
			*p -= 32;
		}
		p++;
	}
	return nu;
}
