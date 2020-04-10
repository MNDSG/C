#include <stdio.h>

char * mystrcat(char *dst, const char *src);
int main(int argc, char *argv[])
{
	char dst[50] = "welcom";
	char src[] = "to china";
	puts(mystrcat(dst, src));
	puts(dst);
	return 0;
}

char * mystrcat(char *dst, const char *src)
{
	char *r = dst;
	while(*dst)
	{
		dst++;
	}
	while(*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return r;
}
