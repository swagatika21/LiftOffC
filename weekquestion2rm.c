#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value for a and b  : ");
    scanf("%d %d" , &a , &b);
    if(a>b)
    {
        printf("the maximum number is  :  %d" ,a);// if the greater number is a
    }
    else if(b>a)
    {
        printf("the maximum number is  :  %d" ,b);// if greater number is b
    }
    else
    {
        printf("the values entered are same  %d" ,a);// if the number is same
    }
    return 0;
    
}
