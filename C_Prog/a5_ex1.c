#include <stdio.h>

struct Sstudent{
	char name[20];
	int roll;
	float mark;

}

void main(){
	struct Sstudent s1;
	printf("Enter Student info:\n");
	printf("Enter name: ");
	scanf("%s",s1.name);
	printf("Enter roll number: ");
	scanf("%d",&s1.roll);
	printf("Enter mark: ");
	scanf("%f",&s1.mark);
	
	printf("Displaying info:\n");
	printf("name: %s\n",s1.name);
	printf("roll: %d\n",s1.roll);
	printf("mark: %f\n",s1.mark);
	

	
}
