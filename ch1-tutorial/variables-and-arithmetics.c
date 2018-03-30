#include <stdio.h>

/* this is ignored by
the compiler */
main()
{
    // In C, variables should be declared bfore used
    // It consists of type and name
    int fahr, celsius;
    int lower, upper, step;

    // Other data types:
    // char - single byte (8 bits)
    // short - short int
    // long - long int
    // double - double-precision float

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("\nPrint table using while loop:\n");
    printf("F\tC\n");

    // condition in brackets is tested & evaluated
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        // integer division truncaetes:
        // any fractional part is discarded
        printf("%3d %6d\n", fahr, celsius);
        // printf: %d is integer argument
        // We right-justify by specifying digit width
        fahr = fahr + step;
    }

    int fahrNew;

    printf("\nPrint table using for loop:\n");

    // Initialise loop
    // Test / condition of the loop
    // If condition = true, run the body and increment the last
    for (fahrNew = 0; fahrNew <= 300; fahrNew = fahrNew + 20)
        printf("%3d %6.1f\n", fahrNew, (5.0/9.0)*(fahrNew-32));
        // %d = decimal
        // %6d = decimal at least 6 chars wide
        // %f = float
        // %6f = float at least 6 chars wide
        // %.2f = float, 2 chars after decimal point
        // %6.2f = float, at least 6 chars wide with 2 chars after decimal point
}
