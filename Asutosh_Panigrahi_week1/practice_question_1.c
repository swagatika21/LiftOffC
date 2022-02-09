//Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main(){
	float a,b;
	printf("Enter the values of a and b:\n");
	scanf("%f %f",&a,&b);
	printf("the addition of a and b is %f\n",a+b);
	printf("the substraction of a and b is %f\n",a-b);
	printf("the multiplication of a and b is %f\n",a*b);
	printf("the division of a and b is %f\n",a/b);
	return 0;
}
