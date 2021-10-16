#include <stdio.h>

struct Scomplex{
	float real;
	float img;

}
struct Scomplex sumOfComplex(struct Scomplex c1,struct Scomplex c2){
	struct Scomplex res;
	res.real=c1.real+c2,real;
	res.img=c1.img+c2,img;
	return res;
}

void main(){
	struct Scomplex c1;
	struct Scomplex c2;
	struct Scomplex res;
	
	printf("Enter 1st complex info:\n");
	printf("Enter real : ");
	scanf("%f",&c1.real);
	printf("Enter img: ");
	scanf("%f",&c1.img);
	printf("Enter 2nd complex info:\n");
	printf("Enter real : ");
	scanf("%f",&c2.real);
	printf("Enter img: ");
	scanf("%f",&c2.img);
	
	res = sumOfComplex(c1,c2);
	
	printf("Sum :%f+%fi\n",res.real,res.img);
	
	

	
}
