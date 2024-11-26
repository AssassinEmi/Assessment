#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{

    while (true)
    {
        string i = "";

        cout << "Please enter some text: ";
        getline(cin, i);


        // Error Handling
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cerr << "[!] Invalid input, try again." << endl;

            continue;
        }

        if (i == "")
        {
            cerr << "[!] Invalid input , empty input retry" << endl;
            continue;
        }

        bool isANum = false;
        for (char c : i) if (!isANum) isANum = isalpha(c);
        if (!isANum)
        {
            cerr << "[!] The string you inserted has no alphabetic character try again." << endl;
            continue;
        }

        // -- Uppercase ------------------------------------------

        string uppercase = "";

        for (char c : i) uppercase += toupper(c);

        cout << "Uppercase\t => " << uppercase << endl;

        // -- Lowercase ------------------------------------------

        string lowercase = "";

        for (char c : i) lowercase += tolower(c);

        cout << "Lowercase\t => " << lowercase << endl;

        // -- Sentence Case --------------------------------------

        string sentence = "";
        bool shouldUpper = true;

        for (char c : i)
        {
            sentence += shouldUpper ? toupper(c) : tolower(c);

            
            if (c == '.' || c == '!' || c == '?') shouldUpper = true;
            else if (isalpha(c)) shouldUpper = false;
        }

        cout << "Sentence Case\t => " << sentence << endl;


        // -- Alternate Case -------------------------------------

        string alt = "";
        shouldUpper = true; 

        for (char c : i)
        {
            alt += shouldUpper ? toupper(c) : tolower(c);
            if (isalpha(c)) shouldUpper = !shouldUpper;
        }

        cout << "Alternate Case\t => " << alt << endl;
    }
    
    return 0;
}