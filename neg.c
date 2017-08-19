#include <stdio.h>
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d", &number);
	if(number<=0)
	{printf("entered number negative number");
	}else if(number==0)
		printf("Entered number is ZERO ");
	else
	printf("entered number is  positive number");
	return 0;
}
