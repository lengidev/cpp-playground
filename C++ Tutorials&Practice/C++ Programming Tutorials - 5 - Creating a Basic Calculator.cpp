#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int sum;
    string name;

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    cout << "Please! Enter a number: " << endl;
    cin >> a;

    cout << "Enter a second number: " << endl;
    cin >> b;

    sum = a + b;

    cout << "Your answer is " << sum << endl;

    return 0;
}
