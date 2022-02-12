//Write a C program to check whether a year is leap year or not
#include <stdio.h>
int main() {
    // Write C code here
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%4==0 && year%100==0 && year%400==0)
    {
        printf("%d is a leap year",year);
    }
    else{
        printf("%d isn't a leap year",year);
    }
    return 0;
}
