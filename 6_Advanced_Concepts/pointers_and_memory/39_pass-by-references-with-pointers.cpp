#include <iostream>
using namespace std;

void passingByValue(int x);
void passingByReference(int *x);

int main(){
    int leng = 17;
    int muzo = 17;

    passingByValue(leng);
    passingByReference(&muzo);

    cout << "leng is now: " << leng << endl;
    cout << "muzo is now: " << muzo << endl;

    return 0;
}

void passingByValue(int x){
    x = 99;
}

void passingByReference(int *x){
    *x = 66;
}
