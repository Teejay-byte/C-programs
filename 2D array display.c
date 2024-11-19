#include <stdio.h>

int main() {
    // Declare and initialize the 2D array 'scores' with 2 rows and 4 columns
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // Print the elements of the array using nested for loops
    printf("Elements of the 'scores' array:\n");
    for (int i = 0; i < 2; i++) {          
        for (int j = 0; j < 4; j++) {      
            printf("%d ", scores[i][j]);  
        }
        printf("\n"); 
    }

    return 0;
}