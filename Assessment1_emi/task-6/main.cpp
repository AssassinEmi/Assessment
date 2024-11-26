#include "main.h"
using namespace std;

int main(int argc, char* argv[])
{
    int num = random(0, 100);
    cout << "Hey, The correct answer is " << num << endl;

    int i = 0;
    while (true)
    {
        int guess = 0;

        cout << "Guess between 0-100: ";
        cin >> guess;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cerr << "[!] Invalid input, try again." << endl;

            continue;
        }
        else if (!(guess >= 0 && guess <= 100))
        {
            cerr << "[!] Invalid input, please enter a number between 0-100, try again." << endl;

            continue;
        }

        int d = abs(guess - num);
        i++;

        if (d >= 50) cout << "jeez it's freezing, guess again!" << endl;
        else if (35 <= d && d < 50) cout << "a little better, guess again!" << endl;
        else if (25 <= d && d < 35) cout << "still a bit cold, guess again!" << endl;
        else if (15 <= d && d < 25) cout << "it feels fine, guess again!" << endl;
        else if (10 <= d && d < 15) cout << "t-shirt it is then, guess again!" << endl;
        else if (3 <= d && d < 5) cout << "Time for the pool, guess again!" << endl;
        else if (1 <= d && d < 3) cout << "That's to hot man, guess again!" << endl;
        else if (d == 0)
        {
            cout << endl << "Well done you got it right! It took you " << i << (i == 1 ? " guess! " : " guesses!") << endl;
            return 0;
        }
    }

    return 0;
}