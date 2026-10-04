#include <iostream>
using namespace std;
int main()
{
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else if (num1 == num2)
    {
        cout << num1 << "number is equal too " <<num2 << endl;
    }
    else if (num1 < num2)
    return 0;
}