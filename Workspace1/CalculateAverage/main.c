#include <stdio.h>

int main()
{
    int sum, s1, s2, s3, s4, s5, total=500;
    float percentage;
	printf("Welcome to calculate average\n");
    printf("----------------------------\n");
    printf("Enter marks of five subjects\n");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    
    sum= s1+s2+s3+s4+s5;
    printf("The sum is %d\n", sum);
    percentage=((float)sum*100)/total;
    printf("%f\n", percentage);
    
	return 0;
}
