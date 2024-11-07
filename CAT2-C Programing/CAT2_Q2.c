#include <stdio.h>

int main() {
    // Define and initialize the 2D array
    int scores[2][4] = {
        {65, 92,  84, 72},
        {35, 70,  59, 67}
    };

    // Print the elements using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
