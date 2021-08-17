/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	float num=0.0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&num);
	if(num > 0){
		printf("%f is positive",num);
	}else if(num < 0){
		printf("%f is negative",num);
	}else{
		printf("Zero!!");
	}
}


