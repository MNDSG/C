#include <stdio.h>


void del_space(char *p, char *p1);
int main(int argc, char *argv[])
{
	char s1[30];
	char s[] = "h e llo,   w o    r  ld,I a m hqqq j j o pz  a";
	del_space(s, s1);
	puts(s1);
}

void del_space(char *p, char *p1)
{
	while(*p)
	{
		if(*p == ' ')
		{
			
		}else
		{
			*p1 = *p;
			p1++;
		}
		p++;
	}
	*(p1) = '\0';
}
