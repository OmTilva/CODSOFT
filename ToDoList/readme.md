# To-Do List

This is a simple To-Do List application implemented in C++. The program allows users to add, view, mark, and remove tasks from their to-do list.

## Features

- Add a task
- View all tasks
- Mark a task as completed
- Remove a task

## Language and Concepts Used

- **Language**: C++
- **Concepts**:
  - Input/Output Operations
  - Data Structures (map)
  - Conditional Statements (if-else, switch-case)
  - Loops (while loop)
  - OOPS(Classes and Objects)
  - String Handling

## Usage

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/your-username/to-do-list.git
   ```
2. Navigate to the project directory:
   ```bash
   cd to-do-list
   ```
3. Compile the program:
   ```bash
   g++ -o todo_list todo_list.cpp
   ```
4. Run the program:
   ```bash
   ./todo_list
   ```

## How It Works

1. The program starts by displaying the menu options.
2. The user can select one of the following options:
   - **Press 1**: To add a task. The user is prompted to enter the task name.
   - **Press 2**: To view all tasks. The program displays all tasks with their statuses (Pending or Completed).
   - **Press 3**: To mark a task as completed. The user is prompted to enter the task name to be marked as completed.
   - **Press 4**: To remove a task. The user is prompted to enter the task name to be removed.
   - **Press 5**: To end the program.
3. The user inputs the desired option, and the program performs the corresponding action.
4. The program continues to run until the user selects option 5 to terminate it.

## Example

```
                      To Do List
Press 1 => To Add Task
Press 2 => To View Task
Press 3 => To Mark Task
Press 4 => To Remove Task
Press 5 => To End Program

Enter Input: 1

Add Task: Buy groceries

Enter Input: 2

        Buy groceries , Pending.

Enter Input: 3

Enter task to be completed: Buy groceries
Task Completed

Enter Input: 2

        Buy groceries , Completed.

Enter Input: 4

Enter task to be deleted: Buy groceries
Task Deleted

Enter Input: 5
                      Program Terminated
```

## Author

- Om Tilva

## Contact

- Feel free to reach out if you have any questions or suggestions:

- Email: omtilva1910@gmail.com
- LinkedIn: [your-linkedin](https://www.linkedin.com/in/om-tilva1910)
