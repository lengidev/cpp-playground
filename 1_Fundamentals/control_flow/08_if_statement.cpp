#include <iostream>

using namespace std;

int main()
{
    int a;
    int check;

    cout << "Enter a number: " << endl;
    cin >> a;

    check = a % 2;

    if (check == 0){
        cout << a << " is even" << endl;;
    }
    else{
        cout << a << " is odd" << endl;;
    }

    return 0;
}
