#include<stdio.h>
int main()
{	
	int n , i , count =0;
	printf("enter a posiotive integer:");
	scanf("%d",&n);
	if (n==0 || n==1)
	count=1;
	for (i =i<+n/2++i)
	if (n%i==0)
	count=1;
	break;
	if (count==0)
		printf("%d is a prime number",n);	
	else
		printf("%d is not a prime number",n);
		return 0;
}	
