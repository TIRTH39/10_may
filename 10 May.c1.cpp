#include<stdio.h>
//1.WAP to find cube of given no using UDF.

cube(int n1)
{
	int sum;
	sum=n1*n1*n1;
	printf("cube=%d",sum);
}

main()
{
	int a;
	printf("Enter any no.=");
	scanf("%d",&a);
	cube(a);
}
