#include <stdio.h>

int main()
{
    int age;
    
    //Asking age for voting
	printf("Enter your age\n");
    scanf("%d", &age);
    
    //Checking voting eligible
    if (age == 18){
        printf("you are eligible for vote.\n");
    }  
    if (age < 18){
        printf("you are not eligible for vote.\n");
    }   
    if (age > 18){
        printf("you are eligible for vote.\n");
    }
	return 0;
}
