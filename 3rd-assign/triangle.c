//TRIANGLES
#include<stdio.h>
int main()
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	if(A+B+C==180)
	{
		if(A==B==C)
		{
			printf("IT IS EQUAIGULAR TRIANGLE");
		}
		else if((A==90) || (B==90) || (C==90))
		{
			printf("IT IS RIGHT ANGLED TRIANGLE");
		}
		else if((A>90) || (B==90) || (C==90))
		{
			printf("OBTUSE ANGLED TRIANGLE");
		}
		else if(A==B==C<90)
		{
			printf("IT IS ACUTE ANGLE");
		}
		else
		{
			printf("INVALID");
		}
	}
	else 
	{
		printf("INVALID TRIANGLE");
	}
	return 0;
}
