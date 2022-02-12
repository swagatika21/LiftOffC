//Write a program to find maximum between two numbers
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter the value of num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2){
		printf("%d is the greater value\n",num1);
	}
	else if(num1<num2){
		printf("%d is the greater value\n",num2);
	}
	else if(num1=num2){
		printf("%d = %d so give different input",num1,num2);
	}
	return 0;
}
