# Simple Calculator

This is a simple calculator program implemented in C++. The program takes two numbers and an operator as input from the user, performs the corresponding arithmetic operation, and displays the result. The program repeats this process five times.

## Features

- Addition
- Subtraction
- Multiplication
- Division (with division by zero check)

## Language and Concepts Used

- **Language**: C++
- **Concepts**:
  - Input/Output Operations
  - Loops (for loop)
  - Conditional Statements (switch-case, if-else)
  - Basic Arithmetic Operations
  - Error Handling

## Usage

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/your-username/simple-calculator.git
   ```
2. Navigate to the project directory:
   ```bash
   cd simple-calculator
   ```
3. Compile the program:
   ```bash
   g++ -o calculator calculator.cpp
   ```
4. Run the program:
   ```bash
   ./calculator
   ```

## How It Works

1. The program runs a loop five times.
2. Within each iteration, the program prompts the user to enter two numbers and an operator.
3. The program then performs the corresponding operation based on the entered operator:
   - `+` for addition
   - `-` for subtraction
   - `*` for multiplication
   - `/` for division, with a check to avoid division by zero
4. If an invalid operator is entered, the program prompts the user to enter the operator again until a valid operator is entered.

## Example

```
Enter first Number: 5
Enter second Number: 3
Select operator(+,-,*,/): +
5 + 3 = 8

Enter first Number: 10
Enter second Number: 2
Select operator(+,-,*,/): /
10 / 2 = 5
```

## Author

- Om Tilva

## Contact

- Feel free to reach out if you have any questions or suggestions:

- Email: omtilva1910@gmail.com
- LinkedIn: [your-linkedin](https://www.linkedin.com/in/om-tilva1910)
