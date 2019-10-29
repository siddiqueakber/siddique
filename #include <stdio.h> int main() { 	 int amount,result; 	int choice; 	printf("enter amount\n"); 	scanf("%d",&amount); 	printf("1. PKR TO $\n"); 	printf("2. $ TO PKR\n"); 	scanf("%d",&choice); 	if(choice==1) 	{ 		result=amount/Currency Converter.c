#include <stdio.h>
int main()
{
	 int amount,result;
	int choice;
	printf("enter amount\n");
	scanf("%d",&amount);
	printf("1. PKR TO $\n");
	printf("2. $ TO PKR\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		result=amount/156;
	}
	else if (choice==2)
	{
		result=amount*156;
	}
	printf(" result= %d",result);
	return 0;
}
