#include <stdio.h>

int main() {
    char choice = '\0';
    char again = 'Y';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    do {
        printf("==========================================================================\n");
        printf("               Temperature Conversion Calculator Program\n");
        printf("==========================================================================\n");

        printf("C. Celsius to Fahrenheit\n");
        printf("F. Fahrenheit to Celsius\n");
        printf("Is the temp in Celsius or Fahrenheit? (C/F): ");
        scanf(" %c", &choice);

        if (choice == 'C' || choice == 'c') {
            // Convert Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            
            fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
            printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
            printf("==========================================================================\n");
        
        } else if (choice == 'F' || choice == 'f') {
            // Convert Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
            printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);
            printf("==========================================================================\n");
        
        } else {
            printf("Invalid choice. Please select either C or F.\n");
            printf("==========================================================================\n");
        }

        // Ask the user if they want to repeat
        printf("Would you like to make another conversion? (Y/N): ");
        scanf(" %c", &again);
        printf("\n");

    } while (again == 'Y' || again == 'y');

    printf("Thank you for using the Temperature Conversion Calculator! Goodbye!\n");

    return 0;
}