#include<stdio.h>
int main()
{
    float length, breadth, radius;

    printf("Enter length of rectangle ");
    scanf("%f", &length );
    printf("Enter breadth of rectangle ");
    scanf("%f", &breadth);
    printf("Enter radius of circle");
    scanf("%f",&radius);
float area, parameter, circumference, area_circle;
    area=length * breadth;
    printf("the area of rectangle = %f\n", area);
    
    parameter= 2*(length + breadth);
    printf("parameter of rectangle is = %f\n",parameter);

    circumference= 2*3.14*radius;
    printf("circumference of circle is =%f\n",circumference);

    area_circle= 3.14*radius*radius;
    printf("area of circle is=%f\n",area_circle);

    return 0;

}