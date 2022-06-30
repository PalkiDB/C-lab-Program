//electricity bill
#include<stdio.h>
intmain()
{
	flot volts, total charge;
	charname(20);
	Printf("enter the name:");
	scanf("%f",&unit);
	
	charge==0;
	if (unit>=1&unit<=200)
	{
		charge=0.8*unit,=200;
	}
	else if (unit>=201&unit<=300)
	{
		charge=0.8*(200)+0.9*(unit-200);
	}
	else if (uni>300)
	{
		charge=0.8*(200)=0.9*(100)+1*(unit-300);
	}
	total=charge+100;
	if(total>400)
	{
		total=total+(0.15*total);
	}
	printf("electricity bill");
	printf("...........\n");
	printf("name: %s",name);
	printf("no. of units:%2f",unit);
	printf("total bill amount :rs%2f",total);
	}
	return0;
