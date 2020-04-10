#include <stdio.h>

char * del_space(char *s);
int main(int argc, char *argv[])
{
	char *r;
	char str[] = "how are y o  u";
	r = del_space(str);
	printf("---%s---\n",r);
	puts(str);
	return 0;
}

char * del_space(char *s)
{
	char *r = s;
	char *p = s;
	while(*s)
	{
		if(*s == ' ')
			s++;
		else
		{
			*p = *s;
			p++;
			s++;
		}
	}
	*p = '\0';
	return r;
}
