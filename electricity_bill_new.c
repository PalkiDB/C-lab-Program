//electricity bill
#include<stdio.h>
int main()
{
	float unit,total;
	char name[20];
	printf("enter the name:");
	scanf("%s",name);
	printf("enter units:");
	scanf("%f",&unit);
	

	if (unit<0)
	{
		printf("invalid");
		return 1;
	}
	if (unit<=200)
	{
		total=0.8*unit+100;
	}
	else if (unit<=300)
	{
		total=0.8*(200)+0.9*(unit-200)+100;
	}
	else
	{
		total=0.8*(200)+.9*(100)+1*(unit-300)+100;
	}
	
	if(total>400)
	{
		total=total+(0.15*total);
	}
	printf("electricity bill\n");
	printf("...........\n");
	printf("name: %s\n",name);
	printf("no. of units:%2f\n",unit);
	printf("total bill amount :rs%2f\n",total);
	
	return 0;
}
