#include<stdio.h>
main()
{
	int i,j;
	printf("enter number to print table=");
	scanf("%d",&j);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",j,i,j*i);
	}
}

