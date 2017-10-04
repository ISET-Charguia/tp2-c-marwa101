/*
 ============================================================================
 Name        : ex4.c
 Author      : nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int a;
	printf("donner une année:");
	scanf("%d",&a);
	if((a%4==0)&&(a%100!=0))
	{
		printf("%d est bissextile",a);
	}
	else
	{
		printf("%d n'est pas bissextile",a);
	}
	return 0;
}
