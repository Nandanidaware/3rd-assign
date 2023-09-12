//Total electricity bill
#include<stdio.h>
int main()
{
	int U,TB;
	scanf("%d",&U);
	if(U<=100)
	{
		printf("NO CHARGE");
	}
	else if((U>100) && (U<=200))
	{
		TB=(U*0)+(U-100)*5;
		printf("%d is Total Bill",TB);
	}
	else
	{
		TB=(U*0)+(U*5)+(U-200)*10;
		printf("%d is Total Bill",TB);
	}
	return 0;
}
