#include <stdio.h>

int main()
{
    int a,b;
    printf("Welcome to console calculator\n");
	printf("Addition Of Numbers\n");
    printf("-------------------\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("The sum of two numbers is %d\n", a+b);
    
    printf("subtraction of two numbers\n");
    printf("--------------------------\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("The difference of two numbers is %d\n", a-b);
    
    printf("Multiplication of two numbers\n");
    printf("-----------------------------\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("The multiplication of two numbers is %d\n", a*b);
    
    printf("Division of two numbers\n");
    printf("-----------------------");
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("The division of two numbers is %d\n", a/b);
    
     
	return 0;
}
