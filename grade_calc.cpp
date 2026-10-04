#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "You got an A grade.";
    }
    else if (marks >= 80)
    {
        cout << "You got B grade";
    }
    else if (marks >= 70)
    {
        cout << "You got C grade";
    }
    else if (marks >= 60)
    {
        cout << "You got D grade";
    }
    else
    {
        cout << "You got F grade";
    }

    return 0;
}