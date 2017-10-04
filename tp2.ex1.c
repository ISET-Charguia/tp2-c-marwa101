/*
 ============================================================================
 Name        : ex2.c
 Author      : nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int n;
	printf("donnez un entier");
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("%d est divisible par 3",n);
	}
	else
	{
		printf("%d n'est pas divisible par 3",n);
	}
	return 0;
}
