#include <iostream>
using namespace std;
#include <cstdlib> 
#include <ctime>   

int main() {

    srand(static_cast<unsigned int>(time(0)));
    const int secretTarget = rand() % 100 + 1; 
    
    int guess = 0;
    int attempts = 0;

    cout << "--- Welcome to the Number Guessing Game! ---" << endl;
    cout << "I have picked a number between 1 and 100." << endl;

    
    while (guess != secretTarget) {
    cout << "Enter your guess: ";
    cin >> guess;
        attempts++;

        if (guess > secretTarget) {
        cout << "Too High!" << endl;
        } 
        else if (guess < secretTarget) {
    cout << "Too Low!" << endl;
        } 
        else {
    cout << "Correct!" << endl;
        }
    }
    cout << "You won in " << attempts << " attempts!" << Joshuaendl;

    return 0;
}
