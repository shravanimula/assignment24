#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int length;
	printf("enter astring:");
	gets(s1);
	length=strlen(s1);
	printf("length of string:%d\n",length);
}
