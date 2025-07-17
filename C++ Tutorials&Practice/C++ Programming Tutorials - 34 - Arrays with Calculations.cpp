#include <iostream>
using namespace std;

int main(){
    int numArray[5] = {20,64,75,4,103};
    int sum;

    for(int x = 0; x <= 4; x++){
        sum += numArray[x];
        cout << sum <<endl;
    }

    return 0;
}
