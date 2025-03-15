#include<bits/stdc++.h>>
using namespace std;

int main()
{
    int random,guess,attempts=0; // ables for random number, user guess, and attempt counter
    srand(time(0)); // Seed the random number generator with the current time
    random=rand()%10+1; // Generate a random number between 1 and 10
    cout<<"Welcome to the Number Guessing Game!\n";
    cout<<"I'm thinking of a number between 1 and 10.\n";
    do {
        cout<<"Enter your guess (1-10): ";
        cin>>guess;
        if(cin.fail()) // Handle invalid input (non-integer values)
		 {
            cout<<"Please enter a valid number!\n";
            cin.clear(); // Clear the error flag on cin
            cin.ignore(10000,'\n'); // Ignore invalid input from buffer
            continue; // Skip rest of loop and prompt user again
        }
        if (guess<1 || guess>10) // Ensure input is within the valid range (1-10)
		 {
            cout<<"Out of range! Please enter a number between 1 and 10.\n";
            continue;
        }
        attempts++; // Increment attempt counter
        if(guess<random) // Compare user's guess with the generated random number
        {
            cout<<"Too low! Try again.\n";
        }
        else if(guess>random)
        {
            cout<<"Too high! Try again.\n";
        }
        else
		{
            cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts!\n"; // Correct guess, display congratulations message
        }
    }while(guess!=random); // Correct guess, display congratulations message
    cout<<"Thanks for playing!\n"; // End message
    return 0; // End of the program
}
