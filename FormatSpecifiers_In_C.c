#include <stdio.h>

int main(){
    /* FORMAT SPECIFIERS = Special tokens that begin with a % symbol,
                           followed by a character that specifies the data type
                           and optional modifiers (width, precision, flags),
                           They control how data is displayed and interpreted */

    int age = 18;
    float price = 19.99;
    double pi = 3.1415926535;
    char symbol = '!';
    char name[] = "Braxten";   // An array of characters are strings

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%.10lf\n", pi);
    printf("%c\n", symbol);
    printf("%s\n", name);

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;               //WIDTH

    printf("%4d\n",num1);
     printf("%4d\n",num2);
      printf("%4d\n",num3);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;        //PRECISION

    printf("%+8.2f\n",price1);
    printf("%+3.2f\n",price2);
    printf("%+5.2f\n",price3);



    return 0;
}
