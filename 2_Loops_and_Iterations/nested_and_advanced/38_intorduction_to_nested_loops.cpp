#include <iostream>
using namespace std;

int main(){
    int myVariable = 5;
    cout << &myVariable << endl;

    int *lengPointer;
        lengPointer = &myVariable;

    cout << &lengPointer;

    return 0;
}

// https://www.youtube.com/watch?v=VOpjAHCee7c&ab_channel=JacobSorber
