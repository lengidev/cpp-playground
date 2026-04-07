#include <iostream>
using namespace std;

int main(){
    int myArr[5];
    int *lp0 = &myArr[0];
    int *lp1 = &myArr[1];
    int *lp2 = &myArr[2];


    cout << "lp0 is at " << lp0 << endl;
    cout << "lp1 is at " << lp1 << endl;
    cout << "lp2 is at " << lp2 << endl;


    return 0;
}
