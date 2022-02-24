#include <stdio.h>
int function(int, int[]);  
int main()
{
	int i, a = 20;
        int arr[3] = { 10, 20, 30};
	a = function(a, &arr[0]);
	printf("value of a is %d\n", a);
	for (i = 0; i <3; i++) 
	{
	    	printf("value of arr[%d] is %d\n", i, arr[i]);
	}
	return 0;
}  
int function(int a, int* arr)
{
	int i;
        a = a + 10;
	arr[0] = arr[0] + 10;
	arr[1] = arr[1] + 20;
	arr[2] = arr[2] + 30;
	return a;
}
