#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch1[] = "Hello World!";

	char *p;
	p = ch1;

	puts(ch1);
	if(isalpha(*p)){
		if(isupper(*p)){
			*p = tolower(*p);
		}else{
			*p = toupper(*p);
		}	
	}
	puts(ch1);
	return 0;
}
