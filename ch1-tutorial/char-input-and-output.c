#include <stdio.h>

main()
{
    int c;

    // Get character from stdin
    c = getchar();


    while (c != EOF) {
        // Print character via putchar
        printf(" ");
        putchar(c);

        // Print via printf
        c = getchar();
        printf("\n%3d", c);
        printf(" < ASCII code for the char you typed: ");
    }
}

/* output of this program is a bit
funky */
