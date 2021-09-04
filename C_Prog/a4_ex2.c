/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

int getFactorial(int num){
	
	if(num>0)
		return num*getFactorial(num-1);
	else
		return 1;
}

void main()
{
	int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, getFactorial(n));
	
}


