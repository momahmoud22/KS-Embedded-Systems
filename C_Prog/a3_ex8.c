/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>
#include <string.h>


void main()
{
	char str[100],revStr[100];
	int len,i;
	
	printf("Enter a string: ");
	gets(str);

	len = strlen(str);
	
	for(i=0;i<len;i++)
	{
		revStr[len-i-1]=str[i];
	}
	
	printf("reverse string: ");
	puts(revStr);
}