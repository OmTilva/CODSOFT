#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class lucky_number
{
public:
    float lno, pl;
    void generate();
    void guess();
    void display();
};
void lucky_number ::generate()
{
    srand(time(0));
    lno = (rand()) % 100 + 1;
}

void lucky_number::guess()
{
    cout << "Guess the lucky number:";
    cin >> pl;
    if (pl > 100 || pl <= 0)
    {
        cout << "..WARNING!..\nLucky number is smaller than 100 and positive" << endl;
        guess();
    }
}

void lucky_number::display()
{
    cout << "\nWoahh You've Guessed Right!! \tNumber Generated Was:" << lno << endl;
}

class process : public lucky_number // inherting.
{
public:
    void game()
    {
        do
        {
            guess();
            if (lno / pl > 1.5 && pl != lno)
            {
                cout << "FEEDBACK: Too Low" << endl;
            }
            if (lno - pl < 0 && lno / pl < 0.85 && pl != lno)
            {

                cout << "FEEDBACK: Too High" << endl;
            }
            else if (lno - pl < 0 && lno / pl > 0.85 && pl != lno)
            {
                cout << "FEEDBACK: Slightly High" << endl;
            }

        } while (pl != lno);
        if (pl == lno)
        {
            display();
        }
    }
};
int main()
{
    cout << setw(50) << "Lucky Number Guess" << endl;
    process p1;
    p1.generate();
    p1.game();
    return 0;
}