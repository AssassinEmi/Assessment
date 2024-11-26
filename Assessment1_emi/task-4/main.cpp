#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    while (true)
    {
        string input = "";

        cout << "Please enter some text: ";
        getline(cin, input);

        // Error Handling
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cerr << "[!] Invalid input, try again." << endl;

            continue;
        }

        if (input == "")
        {
            cerr << "[!] Invalid input, received an empty string, try again." << endl;
            continue;
        }


        int i = 0;
        string lines[] = { "", "", "" };
        for (char c : input)
        {
            
            lines[1] += ((i == 0 ? "|  " : "  ") + string(1, c) + "  |");
            i++;
        }


       
        for (int j = 0; j < i; j++)
        {
            lines[0] += "+=-=-=";
            lines[2] += "+=-=-=";

            if (j == i - 1)
            {
                lines[0] += "+";
                lines[2] += "+";
            }
        }

        for (string s : lines) { cout << s << endl; } // Printing out the array of lines

        cout << endl;
    }

    return 0;
}