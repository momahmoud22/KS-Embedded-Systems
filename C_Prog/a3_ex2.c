/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

void main()
{
	float arr[30],avg;
	int j,n;
	
	printf("Enter number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		printf("%d. Enter number: ",j+1);
		fflush(stdout);
		scanf("%f",&arr[j]);
	}
	
	for(j=0;j<n;j++)
	{
		avg += arr[j];
	}
	
	avg /= n;
	printf("Average = %f",avg);
	
		
	
	
	
	
	
}