#include<stdio.h>
int fun();
int main()
{
	printf("%d\n",fun());
	return 0;
}
int fun(void)//no argument
{
	int n,sum=0;
	for(n=1;n<=25;n++)
	{
		if(n%2!=0)//here take only odd numbers
			sum+=n*n;//sum of squares of odd numbers
	}
	return sum;//return the value
}
