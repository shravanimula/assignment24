#include<stdio.h>
int main()
{
	char s1[20];
	int length,i;
	printf("enter astring:");
	gets(s1);
	length=0;
	for(i=0;s1[i]!='\0';i++)
	{
		length++;
	}
	printf("length of string:%d\n",length);
}
