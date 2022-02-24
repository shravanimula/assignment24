#include<stdio.h>
int main()
{
	int a[10]={2,4,5,9,6,10,1,3,7,8};
	int i,temp,j;
	for(i=0,j=9;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=a[i];
	}
	printf("after reverse the array elements is:");
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
