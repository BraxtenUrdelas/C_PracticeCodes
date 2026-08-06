#include <stdio.h>       //preprocessor directive that displays the standard input/output
#include <stdbool.h>     //preprocessor directive that displays the boolean

int main(){    // This is a Integer which displays Whole numbers only // VARIABLE = a reusable container for a value
    //            behaves as if it were the value it containss
    int age = 25;
    int year = 2026;
    int quantity = 3;
                                       // in the C language all statements shall end with ; or semicolon
    printf("You are %d years old\n", age);      // % is a format specifier to show the compiler its variable
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 2.50;    // You can put a dot ex: %.2f\n to display how many decimals to be shown
    float price = 19.99;      // the float only have 6-7 decimals
    float temperature = -10.1;


    printf("Your GPA is %.2f\n", gpa);
    printf("The price is %.2f\n", price);
    printf("The temperature is %.1f°F\n",temperature);

    double pi = 3.14159265358979;                // more decimals when it comes to doubles

    printf("The value of pi is %.15lf\n", pi);      // One characters represents character or char

    char grade = 'A';
    char symbol = '!';
    char letter = 'B';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n",symbol);
    printf("The first letter of your name is %c\n",letter);

    char name[] = "Braxten";     //This is used to store Multiple characters   Also this is [] an array!!
    char food[] = "pizza";      // This is a string
    char email[] = "fake123@gmail.com";

    printf("My name is %s\n",name);
    printf("My favorite food is %s\n",food);
    printf("My email is %s\n",email);

    bool isOnline = false;   // 1 can be true and false can be 0 since boolean represents the binary
    bool isStudent = false;

    printf("%d\n",isOnline);


    if(isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("You are OFFLINE\n");
    }

    if(isStudent){
        printf("You are a STUDENT\n");
    }
    else{
        printf("You are NOT a STUDENT/n");
    }

    return 0;
}
