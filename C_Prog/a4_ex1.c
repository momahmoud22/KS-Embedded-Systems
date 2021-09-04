/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>
int getPrime(int num);

void main()
{
	int j,n1,n2;
	printf("Enter 2 nums: ");
	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	
	printf("Prime nums from %d to %d  : ",n1,n2);
	for(j=0;j<(n2-n1);j++)
	{
		if(getPrime(n1+j)==1)
			printf("%d\t",n1+j);
	}
	
}


int getPrime(int num)
{
	int i;
 
   for (i=2;i<num;i++)
   { 
      if ( num%i == 0 )
     return 0;
   }
   return 1;
	
	
}