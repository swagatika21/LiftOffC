#include<stdio.h>
int main()// starting of main fnction
{
    float r,d,c,area;
    printf("enter value for radius  :   ");
    scanf("%f" ,&r);
    d=2*r;
    c=2*(22.0/7.0)*r;
    area=(22.0/7.0)*r*r;
    printf("the diameter of circle is  :    %f \n" ,d); // diameter
    printf("the cicumference of the circle is   :    %f \n" ,c);// circumference
    printf("the area of circle is   :  %f  \n " ,area );// area
    return 0;
}
