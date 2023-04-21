#include <iostream>
using namespace std;

//int myFunction(int param1, int param2)
//{
//    int localVariable = param1 + param2;
//    cout << "the sum of params is: " << localVariable << endl;
//    return localVariable;
//};
//
//int testSum = myFunction(444, 55667);

char getYesNo()
{
    cout << "Please answer Y or N" <<endl;
    char localInputVarResponse;

    cin >> localInputVarResponse;

    return localInputVarResponse;
}

void welcome()
{
    cout << "Welcome" << endl;
}

void printResponse(char response)
{
    cout << "You Chose: " << response << endl;
}

void askYesOrNoQuestion()
{
    welcome();
    char answer = getYesNo();
    printResponse(answer);

}
//int main()
//{
//    askYesOrNoQuestion();
//
//}