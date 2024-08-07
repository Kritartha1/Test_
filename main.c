#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int num1, num2, result;

    // Prompt the user for the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user for the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the add function
    result = add(num1, num2);

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
