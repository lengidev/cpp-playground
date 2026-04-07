#include <iostream>

using namespace std;

int main(){
    int counter = 1;
    int num;
    int total = 0;

    cout << "Give me 5 numbers, I will add them: " << endl;

    while (counter <= 5){

        cin >> num;
        total = total + num;

        counter++;
    }

    cout << "Total: " << total << endl;

    return 0;
}

