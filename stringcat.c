#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter astring1:");
	scanf("%s",s1);
	printf("enter astring2:");
	scanf("%s",s2);
	printf("before string cat:%s\t %s\n",s1,s2);
	strcat(s1,s2);
	printf("after string cat:%s\t %s\n",s1,s2);
}
