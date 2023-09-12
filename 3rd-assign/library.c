
//LIBRARY BILL
#include<stdio.h>
int main()
{
	int D,C;
	scanf("%d",&D);
	if((D>=1) && (D<=5))
	{
		C=D*2;
		printf("%d is LIBRARY BILL",C);
	}
	else if((D>5) && (D<=10))
	{
		C=(D*2)+(D-5)*3;
		printf("%d is LIBRARY BILL",C);
	}
	else if((D>10) && (D<=15))
	{
		C=(D*2)+(D*3)+(D-10)*4;
		printf("%d is LIBRARY BILL",C);
	}
	else
	{
		C=(D*2)+(D*3)+(D*4)+(D-15)*5;
		printf("%d is LIBRARY BILL",C);
	}
	return 0;
}
