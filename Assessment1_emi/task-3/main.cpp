#include <iostream>


using namespace std;

enum Error_code
{
    ERROR_STRING_INPUT = 10
};


int main(int argc, char* argv[])
{
    float number = 0;

    cout << "Please enter a number: ";
    cin >> number;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cerr << "[?] This is not a number, you inserted a string, restart" << endl;
        return Error_code::ERROR_STRING_INPUT;

    }

    cout << "neg(x): " << number * -1 << endl;
    cout << "abs(x): " << abs(number) << endl;
    cout << "pow2(x): " << powf(number, 2) << endl;
    cout << "pow3(x): " << powf(abs(number), 3) << endl;
    cout << "sqrt(x): " << sqrtf(abs(number)) << endl;
    cout << "floor(x): " << floorf(abs(number)) << endl;
    cout << "ceil(x): " << ceilf(abs(number)) << endl;
    cout << "round(x): " << roundf(abs(number)) << endl;

    return 0;
}