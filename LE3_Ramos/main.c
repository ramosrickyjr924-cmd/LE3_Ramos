#include <stdio.h>
#include <string.h> 

int main() {
 
    char name[40];
    char section[30];
    float num1, num2;
    float sum, difference, product, quotient;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);
    section[strcspn(section, "\n")] = 0;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    printf("\nStudent Calculator\n");
    printf("Student name: %s\n", name);
    printf("Section: %s\n", section);
    printf("Results:\n");
    
    printf("%.0f + %.0f = %.0f\n", num1, num2, sum);
    printf("%.0f - %.0f = %.0f\n", num1, num2, difference);
    printf("%.0f * %.0f = %.0f\n", num1, num2, product);

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("%.0f / %.0f = %.2f\n", num1, num2, quotient);
    }
    else {
        printf("%.0f / %.0f = Error! Cannot divide by zero.\n", num1, num2);
    }

    return 0;
}
