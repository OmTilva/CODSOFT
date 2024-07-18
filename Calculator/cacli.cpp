#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        char op;
        float a, b;
        cout << "\nEnter first Number:";
        cin >> a;
        cout << "Enter second Number:";
        cin >> b;

    l1:
        cout << "Select operator(+,-,*,/):";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << a << "+" << b << " = " << a + b;
            break;

        case '-':
            cout << a << "-" << b << " = " << a - b;
            break;

        case '*':
            cout << a << "*" << b << " = " << a * b;
            break;

        case '/':
            if (b == 0)
            {
                cout << "Invalid! Dividing by Zero.";
                break;
            }
            else
            {
                cout << a << " / " << b << " = " << a / b;
                break;
            }

        default:
            cout << "INVALID OPERATOR!!!" << endl;
            goto l1;
        }
    }
    return 0;
}