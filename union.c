#include<stdio.h>
union st {
	char c;
	int i;
	float f;
};
int main()
{
	union st var;
	printf("size of var =%lu\n",sizeof(var));
	printf("address of var: %u\n",&var);
	printf("address of members: %u 	%u  %u\n",&var.c,&var.i,&var.f);
}

