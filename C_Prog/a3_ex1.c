/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

void main()
{
	float arr1[2][2];
	float arr2[2][2];
	int i,j;
	
	printf("Enter the elements of 1st matrix:\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
	
	printf("Enter the elements of 2nd matrix:\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}
	
		printf("Sum is :\n");
	for(i=0;i<2;i++)
	{
		if((i==1))
		{
			printf("\n");
		}
		for(j=0;j<2;j++)
		{
			printf("%f\t",arr1[i][j]+arr2[i][j]);
			
		}
		
	}

	
	
	
	
	
	
}