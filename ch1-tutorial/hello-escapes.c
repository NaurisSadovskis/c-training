#include <stdio.h> // include information about standard library

main() // define a function named main that receives no argument values
{   // statements are enclosed in braces
    printf("Hello world!\n");
    // main calls library function printf to print this sequence of characters;
    // \n represents a newline character

    // Statements below provide identical output
    printf("Hello ");
    printf("world");
    printf("!\n");

    // Escape sequance usage
    printf("This text is followed by a tab. \t See?\n");
    printf("You can escape a quote by putting a backslash in front of it: \"\n");
    printf("You can escape a backslash by adding another backslash: \\\n");
    printf("Backspace in action\b!\n");
}
