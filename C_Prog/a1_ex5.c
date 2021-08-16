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
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
}


