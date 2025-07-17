#include <iostream>
using namespace std;

int main(){
    int lengArray[9];

    cout << "Element  -  Value" << endl;

    for (int x = 0; x <= 8; x++ ){
        lengArray[x] = 99;

        cout << x << "    -----    " << lengArray[x] << endl;
    }



    return 0;
}
