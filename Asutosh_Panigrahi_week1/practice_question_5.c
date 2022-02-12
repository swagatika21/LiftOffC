//Write a C program to check whether a number is positive, negative or zero using switch case
#include<stdio.h>
int main(){
	int a;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	switch(a>0){
		case 1:
			printf("%d is positive\n",a);
			break;
		case 0:
			if (a<0){
				printf("%d is negative\n",a);
			}
			 else{
			 printf("%d is zero\n", a);
		}
	}
	return 0;
}
