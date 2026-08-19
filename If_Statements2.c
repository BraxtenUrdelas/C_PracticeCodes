#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isStudent = false;

    if(isStudent == true){    // use double equal signs for stating a value for it!
        printf("You are a Student\n");
    }
    else{
        printf("You are not a Student\n");
    }
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // This is used to get the input from the user and store it in the variable name. The sizeof(name) is used to get the size of the array, so that fgets knows how many characters to read. The stdin is used to specify that we want to read from the standard input (the keyboard).
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
    printf("You did not enter your name.\n");
    }
    else{
        printf("Hello, %s\n", name);
    }

    return 0;
}
