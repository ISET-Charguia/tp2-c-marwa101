/*
 ============================================================================
 Name        : ex5.c
 Author      : nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int n,u,d,c;
	printf("donner un entier positif inf à 999:");
	scanf("%d",&n);
	u=(n%100)%10;
	d=(n%100)/10;
	c=n/100;
	printf("u=%d \n",u);
	printf("d=%d \n",d);
	printf("c=%d",c);
	return 0;
}
