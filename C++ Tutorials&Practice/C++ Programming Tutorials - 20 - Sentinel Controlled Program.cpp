#include <iostream>

using namespace std;

int main(){
    int age;
    int ageTotal = 0;
    int numberOfPeopleEnterd = 0;

    cout << "Enter first person age or -1 to quit" << endl;
    cin >> age;

    while (age != -1){
        ageTotal = ageTotal + age;
        numberOfPeopleEnterd++;

        cout << "Enter next person age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of People Entered: " << numberOfPeopleEnterd << endl;
    cout << "Average age: " << ageTotal/numberOfPeopleEnterd;

    return 0;
}

