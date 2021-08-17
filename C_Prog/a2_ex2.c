/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is a vowel",c);
			break;
		default:
			printf("%c is a constant",c);
			break;
	}
}


