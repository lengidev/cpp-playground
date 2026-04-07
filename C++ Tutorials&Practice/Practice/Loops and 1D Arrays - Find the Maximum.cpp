#include <iostream>

using namespace std;

int main(){
    int userArray[10], n;

    cout << " Please size of array: " << endl;
    cin >> n;

    cout << "Please enter elements (between 1-100): " << endl;

    for(int i=0; i < n; i++){
        cin >> userArray[i];
    }

    int max = userArray[0];
    for(int i=0; i < n; i++){
        if (userArray[i] > max ){
            max = userArray[i];
        }
    }
     cout << "Largest Number is: " << max << endl;

    return 0;
}
