/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

void main()
{
	float arr[30];
	int j,n,element;
	
	printf("Enter number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		printf("%d. Enter number: ",j+1);
		fflush(stdout);
		scanf("%f",&arr[j]);
	}
	
	printf("Enter element: ");
	fflush(stdout);
	scanf("%d",&element);
	
	for(j=0;j<n;j++)
	{
		if(arr[j]==element)
		{	
			printf("%d",j+1);
			break;
		} 
	}
	
	
	
	
	
}