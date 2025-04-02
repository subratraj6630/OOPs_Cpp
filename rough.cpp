#include <iostream>
#include <cstdlib> // For std::rand() and std::srand()
#include <ctime>   // For std::time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    // Generate a random number between 1 and 10
    int secretNumber = std::rand() % 10 + 1;
    int guess = 0;
    int attempts = 0;
    
    std::cout << "Welcome to Guess the Number!" << std::endl;
    std::cout << "I have picked a number between 1 and 10." << std::endl;
    
    // Game loop
    while (guess != secretNumber) {
        std::cout << "\nEnter your guess: ";
        std::cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    }
    
    return 0;
}
