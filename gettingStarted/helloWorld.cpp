#include <iostream>
using namespace std;

// expanding the initial code to modular form to see how that works. just like py.
// no idea what void means. error came up saying "non-void function has no return"
// so I made it void.

void logic()
{
    string helloWorld = "Hello, World";
    int myInt = 13;
    int yourInt = 10;
    char myChar = 'y';

    // putting it all together in if/else statements

    if (myInt > yourInt)
    { // if logical eval is false, the cout command will not execute
        cout << helloWorld << endl;
    }
    else if (myInt == yourInt)
    {
        cout << myChar << endl;
    }
    else
    {
        cout << "butts" << endl;
    }

}

//int main()
//{
//    logic();
//    cin.get();
//}

