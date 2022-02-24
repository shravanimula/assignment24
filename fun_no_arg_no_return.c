#include<stdio.h>
void display(void);
int main()
{
	int choice;
	display();
	printf("enter choice:");
	scanf("%d",&choice);
	return 0;
}
void display(void)
{
	printf("1:create data\n");
	printf("2:insert data\n");
	printf("3:delete data\n");
	printf("4:display\n");
}
