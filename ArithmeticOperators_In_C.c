#include <stdio.h>    //  Arithmetic Operators = + - * / % ++ --

int main(){

    int x = 2;
    int y = 3;
    int z = 0;

    //z = x + y;
    //z = x - y
    //z = x * y;
    //z = x / y;
    //z = x % y;              //% is a Modulus operator to get the Remainder
    z = x ++ y;
    printf("%d", z);

    return 0;
}
