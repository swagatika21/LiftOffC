#include<stdio.h>
#include<conio.h> 
void main() //starting of main function
{
	int r;
	char name[50],branch[60],h[100];  //h for hobbies    r for  registration number
	printf("enter the name of the student \n"); 
	gets(name);
	printf("enter the  branch name \n");
	gets(branch);
	printf("enter the hobbies \n");
	gets(h);
	printf("enter the registration number(last 3 digits) \n");
	scanf("%d",&r);
	//printing of the output of student details
	printf("NAME  :-   %s  \n",name);
	printf("BRANCH  :-   %s  \n",branch);
	printf("REGISTRATION NUMBER :-  %d  \n",r);
	printf("HOBBIES OF THE STUDENT :-  %s \n",h);
	
	}
