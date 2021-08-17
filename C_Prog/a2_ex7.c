/*
 * ex2.c
 *
 *  Created on: Aug 16, 2021
 *      Author: pc
 */
#include "stdio.h"

void main()
{
	int i,num=0,factorial=1;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&num);
	if(num >= 0){
		for(i=1;i<=num;i++){
			factorial *= i;
		}
		printf("Factorial = %d",factorial);
	}else
		printf("Erorr!!");
}


