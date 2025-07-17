#include <iostream>
using namespace std;

int main() {
    int userArray[10], n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    cout << "Enter elements of the array: " << endl;

    for(int i = 0; i < n; i++){
        cin >> userArray[i];
    }
    cout << "\nEven Elements: ";
    for(int i = 0; i < n; i++){
        if(userArray[i]%2==0){
            cout << userArray[i]<< "";
        }
    }
    cout <<"\nOdd Elements: ";
    for(int i = 0; i < n; i++){
        if(userArray[i]%2==1){
            cout << userArray[i] << "";
        }
    }


    return 0;
}
/**This is a simple C++ Program to find even and odd elements in an array.
The program allows the user to enter the size of the array
and receives the elements from the user.
Then, it will separate the even and odd numbers
from this array using for loop.**/
