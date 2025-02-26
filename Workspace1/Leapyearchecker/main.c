#include <stdio.h>

int main()
{
    int year;
    
    // Ask the user to enter a year
	printf("Enter a year: \n");
    scanf("%d", &year);
    
    // Check if the year is leap year
    if (year %400 == 0){
        printf("%d is a leap year.\n", year);
    }else if (year %100 == 0){
        printf("%d is not a leap year.\n", year);
    }else if (year %4 == 0){
        printf("%d is a leap year.\n", year);
    }else{
        printf("%d is not a leap year.\n", year);
    }
    
    
	return 0;
}
