#include<stdio.h>
int main()
{
    int a,b;// declaration of variable
    printf("enter the number to be checked");
    scanf("%d" , &a);
    b=a%2;
    switch(b)//beginning of switch case statement
    {
    case 0:
        printf("the number is even  %d" , a);
        break;
    case 1:
        printf("the number is odd   %d" , a);
        break;
    }   

    return 0;        
}
