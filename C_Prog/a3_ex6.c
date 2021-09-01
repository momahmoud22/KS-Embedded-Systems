/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>
#include <string.h>
void main()
{
	char str[100];
	char ele;
	int i,count=0;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter element: ");
	fflush(stdout);
	scanf("%c",&ele);
	
	for(i=0;i<100;i++)
	{
		if(str[i]==ele)
			count++;
	}
	
	printf("Frequency = %d ",count);

	

	
	
	
	
	
	
}