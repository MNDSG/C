#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char ch1[100] = "Hello World!";
	char *ch2 = "I am MHDSG!";
	char *ch3 = ch2;	
	int i = 0;
	
	while(*(ch1+i) != '\0')
	{
		i++;
	}

	while(*ch2 != '\0')
	{
		*(ch1+i) = *ch2;
		i++;
		ch2++;
	}
	*(ch1+i) = *ch2;
	puts(ch1);
	puts(ch3);
	return 0;
}
