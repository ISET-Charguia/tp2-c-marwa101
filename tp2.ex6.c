/*
 ============================================================================
 Name        : ex6.c
 Author      : nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
float a, b, c,max,min;
printf("donner le premier reel:");
scanf("%f",&a);
printf("donner le deuxieme reel:");
scanf("%f",&b);
printf("donner le troisieme reel:");
scanf("%f",&c);
max = a;
min=a;
if(b>max)
{
	max=b;
}
	if(c>max)
	{
		max=c;
	}
if(min>b)
{
	min=b;
}
if(min>c)
{
	min=c;
}
printf("%f est le maximum \n",max);
printf("%f est le minimum",min);
return 0;
}
