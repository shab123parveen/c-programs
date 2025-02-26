#include <stdio.h>

int main()
{
    char name[50];
    int a,b,c;
    printf("Welcome to c_programing\n");
    printf("Enter your name\n");
    scanf("%s", name);
    printf("calculate simple interest\n");
    printf("-------------------------\n");
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a,&b,&c);
    printf("The simple interest of three numbers is %d", a*b*c/100);
    

	return 0;
}
