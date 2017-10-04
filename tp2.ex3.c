/*
 ============================================================================
 Name        : ex3.c
 Author      : nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int a,b;
	float x;
	printf("donner les paramètres de l'equation:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if(a!=0)
	{
	x=(float)(-b)/a;
	printf("x=%f",x);
	}
	else
	{
		printf("impossible");
	}
	return 0;
}
