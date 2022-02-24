#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter the elements a[%d]:",i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	printf("the values of array:a[i]=%d\n",a[i]);
}
