#include <stdio.h>
#include <stdlib.h> // Include standard library for srand() and rand()
#include <time.h> // Include time library for time()

int main() {
    srand(time(NULL)); // Seed the random number generator with current time
    int n = rand() % 3; // Generate a random number between 0 and 2
    printf("Make Your Choice\n"); // Prompt user to make a choice
    printf("Rock: 0\n"); //// Print options for user
    printf("Paper: 1\n");
    printf("Scissor: 2\n");
    int x;
    scanf("%d", &x); // Read user input
    if (x < 0 || x > 2) {  // Check for invalid choice
        printf("INVALID Choice\n");
        return 0; // Exit program if invalid choice
    }
    printf("You Selected: "); // Print user's choice
    if (x == 0) {
        printf("Rock\n");
    } else if (x == 1) {
        printf("Paper\n");
    } else {
        printf("Scissor\n");
    }
    printf("Computer Selected: "); // Print computer's random choice
    if (n == 0) {
        printf("Rock\n");
    } else if (n == 1) {
        printf("Paper\n");
    } else {
        printf("Scissor\n");
    }
    // Determine the outcome of the game
    if (x == n) {
        printf("It's a Draw!\n");
    } else if ((x == 0 && n == 2) || (x == 1 && n == 0) || (x == 2 && n == 1)) {
        printf("You Won!\n");
    } else {
        printf("You Lose!\n");
    }
    return 0; // End of the program
}
