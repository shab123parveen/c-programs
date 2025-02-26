#include <stdio.h>

int main()
{
    float length, width, side;
    float pie= 3.14 , radius, perimeter;
    printf("Welcome to console perimeter calculator\n");
    printf("----------------------------\n");
    printf("Perimeter of rectangle\n");
    printf("----------------------\n");
	printf("Enter two numbers: ");
    scanf("%f %f", &length, &width);
    
    perimeter = 2*(length + width);
    printf("%f\n\n", perimeter);
    
    
    printf("Perimeter of square\n");
    printf("-------------------\n");
    printf("Enter the length of one side: ");
    scanf("%f", &side);
     
    perimeter = 4*side;
    printf("%f\n\n", perimeter);
    
    
    printf("Perimeter of circle\n");
    printf("-------------------\n");
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    
    perimeter = 2*pie*radius;
    printf("%f", perimeter);
    

	return 0;
}


    