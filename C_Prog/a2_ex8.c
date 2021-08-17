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
	char op;
	printf("Enter operation sign +,-,*,/ ");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(op)
	{
		case '+':
			printf("%f %c %f = %f",num1,op,num2,num1+num2);
			break;
		case '-':
			printf("%f %c %f = %f",num1,op,num2,num1-num2);
			break;
		case '*':
			printf("%f %c %f = %f",num1,op,num2,num1*num2);
			break;
		case '/':
			printf("%f %c %f = %f",num1,op,num2,num1/num2);
			break;
		default:
			printf("Erorr!!");
			break;
	}
	
	
}


