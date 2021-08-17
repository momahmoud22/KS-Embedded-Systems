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
	printf("Enter a char: ");
	fflush(stdout);
	scanf("%c",&c);
	if((c>64&&c<91)||(c>96&&c<123))
		printf("%c is an alphabet",c);
	else
		printf("%c is not an alphabet",c);
}


