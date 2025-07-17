#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int age;
    cin>> age;

    switch(age){
    case 16:
        cout << "Hey, happy sweet 16!" << endl;
        break;
    case 18:
        cout << "Pass me a Beer!" << endl;
        break;
    case 21:
        cout << "Pushing 25!" << endl;
        break;
    default:
        cout << "Do better?" << endl;
    }


    return 0;
}
