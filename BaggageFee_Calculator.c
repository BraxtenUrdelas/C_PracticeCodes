#include <stdio.h>
                        // Braxten Urdelas
int main()
{
    char ticketClass;
    float weight;
    float fee;

    printf("===========================================\n");
    printf("  Welcome to the Baggage Fee Calculator!\n"); 
    printf("===========================================\n");

    printf("Enter ticket class (F = First, E = Economy): ");
    scanf("%c", &ticketClass);

    printf("Enter bag weight (kg): ");
    scanf("%f", &weight);

    if (ticketClass == 'F' || ticketClass == 'f') // i put the || operator to check for both uppercase and lowercase inputs
    {
        fee = 0;
        printf("\nFirst Class - bags fly free!\n");
        printf("Fee: $%.2f\n", fee);
    }
    else if (ticketClass == 'E' || ticketClass == 'e') // i put the || operator to check for both uppercase and lowercase inputs
    {
        if (weight < 23)
        {
            fee = 30; 
            printf("\nStandard weight bag.\n");
            printf("Fee: $%.2f\n", fee);
        }
        else if (weight <= 32)
        {
            fee = 75;
            printf("\nOverweight bag.\n");
            printf("Fee: $%.2f\n", fee);
        }
        else
        {
            printf("\nSorry, this bag is over 32 kg.\n");
            printf("It is rejected and cannot fly.\n");
        }
    }
    else
    {
        printf("\nInvalid ticket class entered.\n");
    }

    printf("\nThank you for using the Baggage Fee Calculator!\n");
    printf("======================================================\n");

    return 0;
}