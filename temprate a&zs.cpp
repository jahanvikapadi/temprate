#include<stdio.h>
main()
{
	char ch='a';
	printf("alphabets from a-z\n");
	do{
		printf("%c\n",ch);
		ch++;
	}
	while(ch<='z');
}
