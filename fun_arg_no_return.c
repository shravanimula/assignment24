#include <stdio.h>
void function(int);
int main()
{
	int a = 20;
	function(a);
	return 0;
}
void function(int a)
{
	printf("value of a is %d\n", a);	     
}
