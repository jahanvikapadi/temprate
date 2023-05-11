#include<stdio.h>
main()
{
	int n,i,num=0;
	printf("\n enter number");
	scanf("%d",&n);
	if(n==0&&n==1)
	{
		printf("%d is not a prime number",n);
	}
	else
	{
		for(i=2;i<=n;i++);
	}
	for(i=2;i<=num;i++);
	{
		if(num%i==0)
		{
			num=1;
		}
	}
	if(num==0)
	{
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
	
}
