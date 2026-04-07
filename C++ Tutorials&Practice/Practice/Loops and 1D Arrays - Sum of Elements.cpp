#include <iostream>

using namespace std;

int main(){
    int userArray[5] = {};
    int sum = 0;

    cout << "Please Enter 5 Numbers: " <<endl;

    for(int x = 0; x < 5; x++){
        cin >> userArray[x];
        sum+=userArray[x];

    }
        cout << "Sum: " << sum << endl;
    return 0;
}

// int sum; was uninitialized, which can lead to garbage values
