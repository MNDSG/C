#include <stdio.h>

void del_space(char *p);
int main(int argc, char *argv[])
{
	char s[] = "  ab c";
	puts(s);
	del_space(s);
	puts(s);
	return 0;
}

void del_space(char *p)
{
	char *q;
	q = p;
	while(*p)
	{
		if(*p == ' ')
		{
			p++;
		}
		else
		{
			*q = *p;
			p++;
			q++;
		}
	}
	*q = '\0';
}
