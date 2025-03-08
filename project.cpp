#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer) {
    // If both the user and computer choose the same thing
    if (you == computer)
        return -1;

    // Stone vs Paper
    if (you == 's' && computer == 'p')
        return 0;
    else if (you == 'p' && computer == 's')
        return 1;

    // Stone vs Scissor
    if (you == 's' && computer == 'z')
        return 1;
    else if (you == 'z' && computer == 's')
        return 0;

    // Paper vs Scissor
    if (you == 'p' && computer == 'z')
        return 0;
    else if (you == 'z' && computer == 'p')
        return 1;

    return -1;  // Default case (should never reach here)
}

// Driver Code
int main() {
    int n;
    char you, computer;
    int result;

    srand(time(NULL)); // Seed random number generator
    n = rand() % 100;  // Generate a random number between 0-99

    // Assign random choice to the computer
    if (n < 33)
        computer = 's'; // Stone
    else if (n < 66)
        computer = 'p'; // Paper
    else
        computer = 'z'; // Scissor

    printf("\n\n\n\n\t\t\t\tEnter 's' for STONE, 'p' for PAPER, and 'z' for SCISSOR\n\t\t\t\t\t\t\t");
    
    // Take input from the user
    scanf(" %c", &you);

    // Function Call to play the game
    result = game(you, computer);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    } else {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }

    printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", you, computer);

    return 0;
}
