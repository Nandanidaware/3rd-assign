
//Electricity Bill Unit
#include<stdio.h>
int main()
{
	int U,SURCHARGE,TOTALBILL;
	scanf("%d",&U);
	if(U<=50)
	{
		float A=U*0.50;
		SURCHARGE=(A*20)/100;
		TOTALBILL=A+SURCHARGE;
		printf("%d Total Bill is",TOTALBILL);
	}
	else if((U>100) && (U<=150))
	{
		float A=(U*0.50)+(U-50)*0.75;
		SURCHARGE=(A*20)/100;
		TOTALBILL=A+SURCHARGE;
		printf("%d Total Bill is",TOTALBILL);	
	}
	else if((U>150) && (U<=250))
	{
		float A=(U*0.50)+(U*0.75)+(U-50)*1.20;
		SURCHARGE=(A*20)/100;
		TOTALBILL=A+SURCHARGE;
		printf("%d Total Bill is",TOTALBILL);
	}
	else
	{
		float A=(U*0.50)+(U*0.75)+(U*1.20)+(U-250)*1.50;
		SURCHARGE=(A*20)/100;
		TOTALBILL=A+SURCHARGE;
		printf("%d Total Bill is",TOTALBILL);	
	}
	return 0;
}
