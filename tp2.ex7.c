/*
 ============================================================================
 Name        : ex7.c
 Author      : nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {
	char c;

	printf("donner un caractère \n");
	scanf("%c", &c);
	if ((c >= 65) && (c <= 90)) {
		printf("c'est un caractère alphabetique majuscule \n");
	} else if ((c >= 97) && (c <= 122)) {
		printf("c'est caractere alphabetique minuscule \n");
	} else if ((c >= 48) && (c <= 57))

	{
		printf("c'est un chiffre \n");
	}

	else
		printf("c'est un symbole \n");
	return 0;
}

