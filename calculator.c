#include <stdio.h>
#include <string.h>

void main() {

    char command[] = "";
    int a, b;

    printf("\nWelcome to Lalith's Calculator\n\n");

    printf("Commands:\n");
    printf("addition - add\n");
    printf("subtraction - sub\n");
    printf("multiplication - mult\n");
    printf("division - div");

    printf("\nWhat would you like to do?: ");
    scanf("%s", &command); 
    
    if (strcmp(command, "add") == 0) {
        int sum;

        printf("\nEnter the first integer: ");
        scanf("%d", &a);

        printf("Enter the second integer: ");
        scanf("%d", &b);

        sum = a + b;
        printf("\nThe sum of %d and %d is %d", a, b, sum);
    } else if (strcmp(command, "sub") == 0) {
        int diff;
        
        printf("Enter the first integer: ");
        scanf("%d", &a);

        printf("Enter the second integer: ");
        scanf("%d", &b);

        diff = a - b;
        printf("\nThe difference of %d and %d is %d", a, b, diff);
    } else if (strcmp(command, "mult") == 0) {
        int prod;
        
        printf("Enter the first integer: ");
        scanf("%d", &a);

        printf("Enter the second integer: ");
        scanf("%d", &b);

        prod = a * b;
        printf("\nThe product of %d and %d is %d", a, b, prod);
    } else if (strcmp(command, "div") == 0) {
        int quot;
        
        printf("Enter the first integer: ");
        scanf("%d", &a);

        printf("Enter the second integer: ");
        scanf("%d", &b);

        quot = a / b;
        printf("\nThe quotient of %d and %d is %d", a, b, quot);
    } else {
        printf("Error: Command not found");
    }
}