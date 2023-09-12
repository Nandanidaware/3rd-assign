
//ROCKWELL HARDNESS
#include<stdio.h>
int main()
{
	int RH,CC,TS;
	scanf("%d%d%d",&RH,&CC,&TS);
	if((RH>50) && (CC>0.7) && (TS>5600))
	{
		printf("GRADE 10");
	}
	else if((RH>50) && (CC>0.7))
	{
		printf("GRADE 9");
	}
	else if((CC>0.7) && (TS>5600))
	{
		printf("GRADE F");
	}
	else if((RH>50) && (TS>5600))
	{
		printf("GRADE 7");
	}
	else
	{
		printf("GRADE 0");
	}
	return 0;
}
