// SQUARE/ROMBUS/PARRALELOGRAM/RECTANGLE/IRREGULAR QUADRILATERAL
#include<stdio.h>
int main()
{
	int AB,BC,CD,DA,A;
	scanf("%d%d%d%d%d",&AB,&BC,&CD,&DA,&A);
	if(AB==BC)
	{
		if(BC==CD)
		{
			if(CD==DA)
			{
				if(A==90)
				{
					printf("IT IS SQUARE");
				}
				else
				{
					printf("IT IS RHOMBUS");
				}	
			}
			else
			{
				printf("IRREGULAR QUADRILATERAL");
			}
		}
		else
		{
			printf("IRREGULAR QUADRILATERAL");	
		}	
	}
	else if(AB==CD)
	{
		if(BC==DA)
		{
			if(A==90)
			{
				printf("IT IS RECTANGLE");
			}
			else
			{
				printf("IT IS PARALLELOGRAM");
			}
		}
		else
		{
			printf("IRREGULAR QUADRILATERAL");
		}
		
	}
	else
	{
		printf("IRREGULAR QUADRILATERAL");
	}
	return 0;
}	
