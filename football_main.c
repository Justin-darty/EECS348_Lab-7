#include <stdio.h>
#include "football.h"  // Include the header file for function declarations

int main() {
    int score;

    
    printf("Enter 0 or 1 to STOP\n");

    while (1) {
        // Prompt the user to enter an NFL score
        printf("Enter the NFL score: ");
        scanf("%d", &score);

        // Check if the user wants to stop the program
        if (score <= 1) {
            printf("Exiting program.\n");
            break;
        }

        // Ensure the entered score is valid (NFL scores start from 2)
        if (score < 2) {
            printf("Invalid input. Score must be 2 or greater.\n");
            continue;
        }

        // Print all possible scoring combinations for the given score
        print_combinations(score);

        // Display the total number of possible combinations
        printf("Total possible combinations: %d\n", count_combinations(score));
    }

    return 0;
}
