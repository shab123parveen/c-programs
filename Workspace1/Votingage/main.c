#include <stdio.h>

int main()
{
    int age;
    
    prinf("Welcome to Vote Eligibility Checker");
    //Asking age for voting
	printf("Enter your age\n");
    scanf("%d", &age);
    
    //Checking voting eligibility
    if (age == 18){
        printf("You are eligible for vote.\n");
    }  
    if (age < 18){
        printf("You are not eligible for vote.\n");
    }   
    if (age > 18){
        printf("You are eligible for vote.\n");
    }
    
    printf("Thanks for choosing our program");
	return 0;
}
