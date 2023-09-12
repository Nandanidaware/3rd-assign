
//gender
#include<stdio.h>
int main()
{
	int AGE,DAYS,A;
	char SEX;
	scanf("%d %d",&AGE,&DAYS);
	scanf(" %c",&SEX);
	if((AGE>=18) && (AGE<30))
	{
		if(SEX=='M')
		{ 
			A=700*DAYS;
			printf("%d IS MALE WAGE\n",A);
		}
		else if(SEX=='F')
		{
			A=750*DAYS;
			printf("%d IS FEMALE WAGE\n",A);
		}
		else
		{
			printf("INVALID\n");
		}
	}
	else if((AGE>=30) && (AGE<=40))
	{
		if(SEX=='M')
		{
			A=800*DAYS;
			printf("%d IS MALE WAGE\n",A);
		}
		else if(SEX=='F')
		{
			A=850*DAYS;
			printf("%d IS FEMALE WAGE\n",A);
		}
		else
		{
			printf("INVALID\n");
		}
	}
	return 0;
}
