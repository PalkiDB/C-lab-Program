#include<stdio.h>
int main()
{
	int n,reversed =0,remainder, original;
	{
		printf("enter an integer:");
		scanf("%d",&n);
		original=n;
	}
	while(n!=0)
	{
		remainder= n%10;
		reversed =reversed*10+remainder;
		n/=10;
	}
	if (original==reversed)
		printf("%d is a palindrom",original);
	else
		printf("%d is not a palindrom",original);
		
		return 0;
}
