#include <iostream>

using namespace std;

int main(){
    int arr[10] = {};

    cout << "Please enter values: " << endl;

    for(int i = 0; i <= 9; i++){
        cin >> arr[i];
    }


    for(int i = 0; i <= 9; i++){
        int count = arr[i];
        if(arr[i] > 0){
            arr[i] = count;
            cout << "They are " << count << " positive numbers!" << endl;
        }
        else if(arr[i] == 0){
            arr[i] = count;
            cout << "They are " << count << " zero numbers!" << endl;
        }
        else if(arr[i] < 0){
            arr[i] = count;
            cout << "They are " << count << " negative numbers!"<< endl;
        }
    }

    return 0;
}

/**# include <iostream>
using namespace std;

int main() {
    int arr[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    cout << "Please enter 10 values: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    cout << "Total positive numbers: " << positiveCount << endl;
    cout << "Total negative numbers: " << negativeCount << endl;
    cout << "Total zero numbers: " << zeroCount << endl;

    return 0;
}*/
