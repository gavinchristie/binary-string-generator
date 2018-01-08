#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** This function recursively creates binary strings
 * @param a Character pointer storing string
 * @param n The current position in the string being modified with one or zero
 */
void binaryStrings ( char * a, int n ) {
    if ( n < 1 ) {
        // Base case prints the binary string
        printf("%s\n", a );
    } else {
        // Setting next character to zero
        a[n - 1] = '0';
        binaryStrings ( a, ( n - 1 ) );
        // Setting next character to one
        a[n - 1] = '1';
        binaryStrings ( a, ( n - 1 ) );
    }
}

int main (  ) {
	
    int n = 0;

    // Getting input
    while ( n < 6 ) {
        printf("Please enter a number: ");
        scanf ( "%d", &n );
    }

    // Initializing array
    char array[n + 1];
    array[n] = '\0';

    // Calling recursive function
    binaryStrings ( array, n );

    return 0;
}