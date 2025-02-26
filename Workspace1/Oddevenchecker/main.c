#include <stdio.h>

int main()
{
    int number;
    
    // Ask the user to enter an integer
	printf("Enter an integer");
    scanf("%d", &number);
    
    // Check if the number is even or odd
    if (number % 2 == 0){
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
        
        
    }
	return 0;
}
