#include <iostream>

using namespace std;

int main(){
    int age;
    string name;

    cout << "What is your name: " << endl;
    cin >> name;

    cout << "Hello! " << name << endl;

    cout << "How old are you: " << endl;
    cin >> age;

    if(age < 13){
        cout << "Wow!" << age << " You're too young to work here!" <<endl;
    }
    else if (age >= 13 && age <= 19){
        cout << "You're " << age << ", have you considered part time?" << endl;

        if (age >= 16){
            int workHours;

            cout << "\n You're eligible to work at least 40 hours a week!" << endl;
            cout << "Enter work hours: " << endl;
            cin >> workHours;
        }
        else{
           cout << "\n You're eligible to work at least 36 hours a week!" << endl;
        }
    }
    else if (age >= 19 && age <= 64){
        cout << "You're " << age << "! We could consider you!" << endl;
    }
    else{
       cout << "AHHH! " << age << " Senior Citizen!";
    }

    return 0;
}

