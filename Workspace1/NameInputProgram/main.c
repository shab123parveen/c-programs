#include <stdio.h>

int main(int argc, char **argv)
{
	char name[50]; 
    
    printf("Enter your name: ");
    scanf("%s", name); 
//    fgets(name, sizeof(name), stdin);
     
    printf("Hello, %s! Welcome to c programming.\n", name);
	return 0;
}
