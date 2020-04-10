#include <stdio.h>
#include <string.h>

char * getstring()
{
	//char str[20];error
	static char str[20];//right
	strcpy(str, "hello");
	return str;
}


int main()
{
	printf("---%s---\n", getstring());
	return 0;
}
