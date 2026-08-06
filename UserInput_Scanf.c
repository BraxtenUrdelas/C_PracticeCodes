#include <stdio.h>
#include <string.h>

int main(){
    
    int age = 0;
    float gpa = 0.0f;   // f if its a float, if its a double then no f is needed
    char grade = '\0';  // the value inside the single quotes is the character that will be stored in the variable   
    char name[50] = "";  // the value inside the brackets is the maximum number of characters that can be stored in the array
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your GPA: ");
    scanf("%f", &gpa);   // the & is used to get the address of the variable, so that scanf can store the value in the correct location
    
    printf("Enter your grade: ");
    scanf(" %c", &grade); // the space before %c is used to ignore any whitespace characters that may be present in the input buffer
   
    getchar(); // this is used to consume the newline character left in the input buffer by the previous scanf, 
                //so that fgets can read the full name correctly
    printf("Enter your full name: ");    
    fgets(name, sizeof(name), stdin);   /* no & is needed for strings, because the name of the array
                                is already a pointer to the first element of the array  */
    if (strlen(name) > 0 && name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';  // this is used to remove the newline character that fgets adds at the end of the string
    }
                 //fgets is used instead of scanf to read the full name, because scanf stops reading at the first whitespace character,
     //while fgets reads the entire line until a newline character is encountered or the maximum number of characters is reached.
    

    printf("Your full name is: %s\n", name);
    printf("Your are %d years old.\n", age);
    printf("Your GPA is: %.2f\n", gpa);
    printf("Your grade is: %c\n", grade);
    
   
    return 0;
}
