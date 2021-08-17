/*
 * main.c
 *
 *  Created on: Aug 7, 2021
 *      Author: Mohamed
 */

#include "stdio.h"

void main()
{
	int num=0;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&num);
	if ((num%2)==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
	
}
