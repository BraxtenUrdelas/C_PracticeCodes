#include <stdio.h>

int main() {

    char item[50] = "";  // the value inside the brackets is the maximum number of characters that can be stored in the array
    float price = 0.0f;   // f if its a float, if its a double then no f is needed
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    
    printf("What is the price for each item?: ");
    scanf("%f", &price);   // the & is used to get the address of the variable, so that scanf can store the value in the correct location
    
    printf("How many items would you like to buy?: ");
    scanf("%d", &quantity);
    
    total = price * quantity;
    printf("You have selected %d %s at a price of %c%.2f each.\n", quantity, item, currency, price);
    printf("The total cost is: %c%.2f\n", currency, total);
    
    return 0;
}