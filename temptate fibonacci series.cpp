#include<stdio.h>
main()
{
	int f1=0,f2=1,f3,i=2,len;
	printf("enter difits of the fibonacci series:");
	scanf("%d",&len);
	printf("%d\n%d",f1,f2);
	while(i<=len)
	{
		f3=f1+f2;
		printf("\n%d",f3);
		f1=f2;
		f2=f3;
		i=i+1;
	}
}
