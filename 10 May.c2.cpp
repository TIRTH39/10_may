#include<stdio.h>

Division(int n1)
{
	if(n1%3==0 && n1%5==0)
	{
		printf("It is divisible");
	}
	else
	{
		printf("It is not divisible");
	}
}

main()
{
	int a;
	printf("Enter any no.=");
	scanf("%d",&a);
	Division(a);
}
