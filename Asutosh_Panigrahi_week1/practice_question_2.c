#include <stdio.h>
#define pi 3.14
int main()
{
	float radius, diameter, circumference, area;
	printf("Enter radius of circle:\n ");
	scanf("%f",&radius);
	diameter=2*radius;
	circumference=2*pi*radius;
	area=pi*(radius*radius);
	printf("Diameter of circle = %f units\n",diameter);
	printf("Circumference of circle = %f units\n",circumference);
	printf("Area of circle = %f sq. units",area);
	return 0;
}
