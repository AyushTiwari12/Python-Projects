/* This program produces the following multiplication table
1x1= 1	1x2= 2	...	1x9= 9
...
9x1= 9	9x2=18 	...	9x9=81
*/

#include <stdio.h>
int main() {
    int i, j;
    for (i=1; i<=9; i++) {
        for (j=1; j<=9; j++) {
            printf("%dx%d= %2d\t", i, j, i*j);
        } // end for on j
        printf("\n");		// ready for next line
    } // end for on i
    printf("\n\n");
    for (i=1; i<=9; i++) {
        for (j=1; j<=9; j++) {
            printf("%dx%d= %2d\t", j, i, i*j);
        }
        printf("\n");		// ready for next line
    }
    return 0;
}
