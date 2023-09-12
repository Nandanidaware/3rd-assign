
//calculate bonus
#include<stdio.h>
int main()
{
	int PAY,BONUS;
	scanf("%d",&PAY);
	if(PAY>3000)
	{
		BONUS=300;
	}
	else if(PAY>1600)
	{
		BONUS=(PAY*10)/100;
		if(BONUS>240)
		{
			BONUS=240;
		}
		else
		{
			printf("%d\n",BONUS);
		}
	}
	else
	{
		BONUS=(PAY*15)/100;
		if(BONUS<100)
		{
			BONUS=100;
		}
		else
		{
			printf("%d\n",BONUS);
		}
	}
	return 0;
}
