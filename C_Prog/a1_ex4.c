/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	float num1=0.0,num2=0.0;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f ",&num1,&num2);
	printf("Product: %f",num1*num2);
}


