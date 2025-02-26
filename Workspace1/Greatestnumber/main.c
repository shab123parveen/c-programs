#include <stdio.h>

int main()
{
    int a, b, c;
	printf("Welcome to find greatest number\n");
    printf("-------------------------------\n");
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a>b && a>c){
        printf("a is greatest\n");
    }
    
    if(b>c && b>a){
        printf("b is greatest\n");
    }
    
    if(c>a && c>b){
        printf("c is greatest\n");
    }
      
	return 0;
}
