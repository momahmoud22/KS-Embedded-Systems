#include <stdio.h>

struct Sstudent{
	char name[20];
	float mark;

}

void main(){
	struct Sstudent stud[10];
	int i=0;
	for(i=0;i<10;i++){
		printf("Enter students info:\n");
		printf("For roll number %d :\n",i+1);
		printf("Enter name: ");
		scanf("%s",stud[i].name);
		printf("Enter mark: ");
		scanf("%f",&stud[i].mark);
	}
	
	for(i=0;i<10;i++){
		printf("Displaying info:\n");
		printf("Info for roll number %d :\n",i+1);
		printf("name: %s\n",stud[i].name);
		printf("mark: %f\n",stud[i].mark);
	}


	
}
