#include <bits/stdc++.h>
#include <string>
using namespace std;
class ToDoList
{
private:
    map<string, string> data;

public:
    void TaskInput()
    {
        string taskName;
        cout << "\nAdd Task: ";
        cin >> ws;
        getline(cin, taskName);
        data.insert({taskName, "Pending."});
    }
    void viewTask()
    {
        auto iter = data.begin();
        if (iter == data.end())
        {
            cout << "Task List is Empty." << endl;
        }
        else
        {
            for (iter; iter != data.end(); iter++)
            {

                cout << "\n\t" << (*iter).first << " , " << (*iter).second << "\n";
            }
        }
    }
    void markTask()
    {
        string t;
        cout << "Enter task to be completed: ";
        cin >> ws;
        getline(cin, t);
        auto it = data.find(t);
        if (it == data.end())
        {
            cout << "No Task Found" << endl;
        }
        else
        {
            (*it).second = "Completed.";
            cout << "Task Completed" << endl;
        }
    }
    void removeTask()
    {
        string t;
        cout << "Enter task to be deleted: ";
        cin >> ws;
        getline(cin, t);
        auto it = data.find(t);
        if (it == data.end())
        {
            cout << "No Task Found" << endl;
        }
        else
        {
            data.erase(it);
            cout << "Task Deleted" << endl;
        }
    }
};

int main()
{
    ToDoList user;
    char op;
    cout << setw(50) << "To Do List" << endl;
    cout << "Press 1 => To Add Task\n"
            "Press 2 => To View Task\n"
            "Press 3 => To Mark Task\n"
            "Press 4 => To Remove Task\n"
            "Press 5 => To End Program"
         << endl;
    while (op != 5)
    {
        cout << "\nEnter Input:";
        cin >> op;
        if (op == '5')
        {
            cout << setw(50) << "Program Terminated" << endl;
            break;
        }
        else
        {
            switch (op)
            {
            case '1':
                user.TaskInput();
                break;
            case '2':
                user.viewTask();
                break;
            case '3':
                user.markTask();
                break;
            case '4':
                user.removeTask();
                break;

            default:
                break;
            }
        }
    }
    return 0;
}