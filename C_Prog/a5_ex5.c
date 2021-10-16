#include <stdio.h>

#define PI 3.14

void main(){
	int r=0;float area=0;
	printf("Enter radius : ");
	scanf("%d",&r);
	area = PI * r * r;
	printf("Area = %f",area);	
}
