#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    
	printf("Enter temperature in celsius: \n");
    scanf("%f", &celsius);
    
//    fahrenheit= (9/5)*celsius+32;
    fahrenheit = (celsius * 9/5) + 32;
    printf("%f", fahrenheit);
    
    
	return 0;
}
