/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

void main()
{
	float arr[10][10];
	float arrTrans[10][10];
	int i,j,cols,rows;
	
	printf("Enter rows and coulmns: ");
	fflush(stdout);
	scanf("%d%d",&rows,&cols); 
	
	printf("Enter the elements of 1st matrix:\n ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("Enter a%d%d ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr[i][j]);
		}
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arrTrans[j][i] = arr[i][j];
		}
	}
		
	printf("Matrix:\n");
	for(i=0;i<rows;i++)
	{
		if((i==1))
		{
			printf("\n");
		}
		for(j=0;j<cols;j++)
		{
			printf("%f\t",arr[i][j]);
			
		}
	}
	
	printf("\nTranspose:\n");
	for(i=0;i<cols;i++)
	{
		if((i==1))
			{
				printf("\n");
			}
		if((i==2))
		{
			printf("\n");
		}
		for(j=0;j<rows;j++)
		{
			printf("%f\t",arrTrans[i][j]);
		}
	}
	
	
	
	
	
}