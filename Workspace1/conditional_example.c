#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Wait for user input before closing
    printf("Press Enter to exit...");
    getchar(); // Consume the newline character left in the input buffer by scanf
    getchar(); // Wait for the user to press Enter
    return 0;
}
