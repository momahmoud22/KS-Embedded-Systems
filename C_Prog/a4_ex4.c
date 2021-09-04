/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

int findPower(int num, int pwr){
	
	if(pwr>0)
		return num*findPower(num,pwr-1);
	else
		return 1;
}

void main()
{
	int n,pwr;
    printf("Enter base number: ");
	fflush(stdout);
    scanf("%d",&n);
	printf("Enter power number: ");
	fflush(stdout);
    scanf("%d",&pwr);
    printf("%d^%d = %d", n,pwr, findPower(n,pwr));
	
}


