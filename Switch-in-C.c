#include <stdio.h>

int main() {

    // switch = An alternative to using many if-else statements
    //       More efficient when you have many conditions that depend on the same variable
    //     also with fixed integer values (like 1, 2, 3, etc.) or characters (like 'a', 'b', 'c', etc.)

    char dayOfWeek = '\0';                                      // use '\0' for char variables, and 0 for int variables, 
    printf("Enter a day of the week (M,T,W,R,F,S,U): ");        //and 0.0f for float variables, and 0.0 for double variables, 
    scanf("%c", &dayOfWeek);                                    //and false for bool variables, and NULL for pointer variable

    switch(dayOfWeek) {
        case 'M':
            printf("It is Monday\n");
            break;
        case 'T'    :
            printf("It is Tuesday\n");
            break;
        case 'W':
            printf("It is Wednesday\n");                
            break;
        case 'R':     
        printf("It is Thursday\n");
            break;  
        case 'F':
            printf("It is Friday\n");           
            break;
        case 'S':                 
            printf("It is Saturday\n");
            break;  
        case 'U':
            printf("It is Sunday\n");                   
            break;
        default:
            printf("Please only enter a character (M,T,W,R,F,S,U)\n");
    }


    return 0;
}