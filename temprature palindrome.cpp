#include<stdio.h>
main()
{
	int rev=0,temp,n;
	printf("enter the number\n");      
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	printf("the reverse number %d\n",rev);
	if(n==rev)
	printf("the number is palindrome\n");
	else
	printf(" the number is not palindrome");
}
