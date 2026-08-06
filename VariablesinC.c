#include <stdio.h>

int main(){    // This is a Integer which displays Whole numbers only
    // VARIABLE = a reusable container for a value
    //            behaves as if it were the value it containss

    int age = 25;
    int year = 2026;
    int quantity = 3;
                                       // in the C language all statements shall end with ; or semicolon
    printf("You are %d years old\n", age);      // % is a format specifier to show the compiler its variable
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 2.50;    // You can put a dot ex: %.2f\n to display how many decimals to be shown
    float price = 19.99;


    printf("Your GPA is %.2f\n", gpa);
    printf("The price is %.2f\n", price);

    return 0;
}
