#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "What is your name: " << endl;
    cin >> name;

    cout << "Hello! " << name << endl;

    cout << "\nHow old are you, " << name << endl;
    cin >> age;

    if (age < 13){
        cout << name << " ,you are " << age << " and you are a child!" << endl;
    }
    else if (age >= 13 && age <= 19){
        cout << name << " ,you are " << age << " and you are a Teenager!" << endl;
    }
    else if (age >= 20 && age <= 64){
        cout << name << " ,you are " << age << " and you are an Adult!" << endl;
    }
    else{
        cout << name << " ,you are " << age << " and you are a Senior!" << endl;
    }

    return 0;
}
