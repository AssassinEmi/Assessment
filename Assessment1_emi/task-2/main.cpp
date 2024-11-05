#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string name, username, clantag;
    unsigned int exp, currentLevel = 0;
    
    cout << "Please insert your name: ";
    getline(cin, name);

    cout << endl << "Insert your username: ";
    getline(cin, username);
    
    cout << endl << "Now the clantag:";
    getline(cin, clantag);
    
    cout << endl << "And last your experience: ";
    cin >> exp;

    cout << endl << "Your Name is " << name << ",while your gamertag is[ " << clantag << " ]" << username<<endl;
    cout << "your experience is " << exp << endl << endl;

    currentLevel = exp / 100;

    cout << "Currently you are at level " << currentLevel << " and you are missing " << 100 - (exp % 100) << " for the next level." << endl;



    return 0;
}