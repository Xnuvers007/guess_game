// Create game c++
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int tries = 0;
    bool win = false;
    cout << "Guess My Number Game" << endl;
    while (win == false)
    {
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++;
        if (guess > number)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < number)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "Correct! You win in " << tries << " guesses!" << endl;
            win = true;
        }
    }
    return 0;
}
