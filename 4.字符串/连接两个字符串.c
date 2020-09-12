#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100]="Hello";
	char s2[100]="World";
	strcat(s1,s2);
	printf("%s\n%s\n",s1,s2);
	return 0;
}
