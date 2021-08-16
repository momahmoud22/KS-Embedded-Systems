/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	float a=0.0,b=0.0;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	b = a + b;
	a = b - a;
	b = b - a ;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);
}


