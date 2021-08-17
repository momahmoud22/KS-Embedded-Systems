/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	int i,num=0,sum=0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum += i;
	}
	printf("Sum = %d",sum);
	
}


