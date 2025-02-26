#include <stdio.h>

int main()
{
    int age;
    
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
    
	return 0;
}
