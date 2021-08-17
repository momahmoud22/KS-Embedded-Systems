/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	float num1=0.0,num2=0.0,num3=0.0;
	printf("Enter 3 numbers: ");
	fflush(stdout);
	scanf("%f %f %f ",&num1,&num2,&num3);
	if(num1>num2){
		if(num1>num3){
			printf("Largest number is = %f",num1);
		}else{
			printf("Largest number is = %f",num3);
		}
	}else{
		if(num2>num3){
			printf("Largest number is = %f",num2);
		}else{
			printf("Largest number is = %f",num3);
		}
	}
}


