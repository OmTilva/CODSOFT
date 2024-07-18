# Lucky Number Guessing Game

This is a simple game where the user has to guess a randomly generated lucky number between 1 and 100. The program provides feedback on the user's guesses to help them find the correct number.

## Features

- Randomly generates a lucky number between 1 and 100.
- Allows the user to guess the number.
- Provides feedback if the guess is too high, too low, or slightly high.
- Informs the user when the correct number is guessed.

## Language and Concepts Used

- **Language**: C++
- **Concepts**:
  - Input/Output Operations
  - Random Number Generation
  - Conditional Statements (if-else)
  - Loops (do-while loop)
  - Recursion
  - OOPS(Classes and Objects)
  - Inheritance (class inheritance in C++)
  - Basic Error Handling

## Usage

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/your-username/lucky-number-guessing-game.git
   ```
2. Navigate to the project directory:
   ```bash
   cd lucky-number-guessing-game
   ```
3. Compile the program:
   ```bash
   g++ -o lucky_number_guess lucky_number_guess.cpp
   ```
4. Run the program:
   ```bash
   ./lucky_number_guess
   ```

## How It Works

1. The program starts by generating a random lucky number between 1 and 100.
2. The user is prompted to guess the lucky number.
3. The program provides feedback based on the user's guess:
   - "Too Low" if the guess is much lower than the lucky number.
   - "Too High" if the guess is much higher than the lucky number.
   - "Slightly High" if the guess is slightly higher than the lucky number.
4. The user continues to guess until the correct number is guessed.
5. When the correct number is guessed, the program displays a congratulatory message along with the generated lucky number.

## Example

```
                     Lucky Number Guess
Guess the lucky number: 45
FEEDBACK: Too Low
Guess the lucky number: 90
FEEDBACK: Slightly High
Guess the lucky number: 85
FEEDBACK: Too High
Guess the lucky number: 70
FEEDBACK: Slightly High
Guess the lucky number: 67

Woahh You've Guessed Right!!    Number Generated Was: 67
```

## Author

- Om Tilva

## Contact

- Feel free to reach out if you have any questions or suggestions:

- Email: omtilva1910@gmail.com
- LinkedIn: [your-linkedin](https://www.linkedin.com/in/om-tilva1910)
