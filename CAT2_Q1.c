//C_programing
/*
Name: MBUGUA PETER WAWERU 
Reg : CT100/G/26268/25
Description:2D array
*/

#include <stdio.h>

int main() {
    //  Array definition explained above
    printf("What is an array-  \n");
    
    //  Declaration and initialization
    int scores[2][3] = {
        {65, 92, 35},
        {84, 72, 59}
    };
    
    //  Printing using nested for loop
    printf("2D Array Elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}