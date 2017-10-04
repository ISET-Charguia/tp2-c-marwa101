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
	float n;
	printf("donner un entier");
	scanf("%f",&n);
	if (n<0)
	{
		n=n*(-1);
	}
	else
	{
		n=n*1;
	}
	printf("sa valeur absolue est:%6.3f",n);
	return 0;
}
