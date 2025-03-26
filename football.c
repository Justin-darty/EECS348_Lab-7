#include <stdio.h>
#include "football.h"

// Define possible NFL scoring plays
#define TD_8 8  // Touchdown + 2-point conversion
#define TD_7 7  // Touchdown + extra point
#define TD_6 6  // Touchdown with no extra points
#define FG_3 3  // Field goal
#define SAFETY_2 2  // Safety (2 points)

/**
 * @brief Return the number of possible combinations to add up to `points`
 * 
 * @param points The total score to find combinations for
 * @return int The number of valid scoring combinations
 */
int count_combinations(int points) {
    int count = 0;

    // Iterate through all possible numbers of each scoring type
    for (int td8 = 0; td8 * TD_8 <= points; td8++) {
        for (int td7 = 0; td7 * TD_7 + td8 * TD_8 <= points; td7++) {
            for (int td6 = 0; td6 * TD_6 + td7 * TD_7 + td8 * TD_8 <= points; td6++) {
                for (int fg = 0; fg * FG_3 + td6 * TD_6 + td7 * TD_7 + td8 * TD_8 <= points; fg++) {
                    for (int safety = 0; safety * SAFETY_2 + fg * FG_3 + td6 * TD_6 + td7 * TD_7 + td8 * TD_8 <= points; safety++) {
                        
                        // Check if the sum equals the target score
                        if (td8 * TD_8 + td7 * TD_7 + td6 * TD_6 + fg * FG_3 + safety * SAFETY_2 == points) {
                            count++;  // Increment count for each valid combination
                        }
                    }
                }
            }
        }
    }
    return count;  // Return total number of valid combinations
}

/**
 * @brief Print a formatted table of all possible combinations that add up to `points`
 * 
 * @param points The total score to generate combinations for
 */
void print_combinations(int points) {
    printf("Possible combinations of scoring plays if a team’s score is %d:\n", points);

    // Iterate through all possible numbers of each scoring type
    for (int td8 = 0; td8 * TD_8 <= points; td8++) {
        for (int td7 = 0; td7 * TD_7 + td8 * TD_8 <= points; td7++) {
            for (int td6 = 0; td6 * TD_6 + td7 * TD_7 + td8 * TD_8 <= points; td6++) {
                for (int fg = 0; fg * FG_3 + td6 * TD_6 + td7 * TD_7 + td8 * TD_8 <= points; fg++) {
                    for (int safety = 0; safety * SAFETY_2 + fg * FG_3 + td6 * TD_6 + td7 * TD_7 + td8 * TD_8 <= points; safety++) {
                        
                        // If the combination sums up to the target score, print it
                        if (td8 * TD_8 + td7 * TD_7 + td6 * TD_6 + fg * FG_3 + safety * SAFETY_2 == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", 
                                   td8, td7, td6, fg, safety);
                        }
                    }
                }
            }
        }
    }
}
