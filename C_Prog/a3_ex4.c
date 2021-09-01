/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

void main()
{
	float arr[30];
	int j,n,loc;
	
	printf("Enter number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		printf("%d. Enter number: ",j+1);
		fflush(stdout);
		scanf("%f",&arr[j]);
	}
	
	printf("Enter new location: ");
	fflush(stdout);
	scanf("%d",&loc);
	
	printf("Enter new element: ");
	fflush(stdout);
	scanf("%f",&arr[loc-1]);
	
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
	
}