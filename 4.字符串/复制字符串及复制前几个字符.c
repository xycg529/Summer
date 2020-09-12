#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100]="Hello World";
	char s2[100];
	strcpy(s2,s1);
	printf("%s\n",s2);
	memset(s2,'\0',sizeof(s2)); // 重置s2
	strncpy(s2,s1,5);// 复制s1前五个字符给s2
	printf("%s\n",s2);
	return 0;
}
