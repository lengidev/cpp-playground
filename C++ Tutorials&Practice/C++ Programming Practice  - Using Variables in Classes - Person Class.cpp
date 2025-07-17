#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
        void setDetails(string x, int y){
            name = x;
            age = y;

        }
        void getDetails(){
           cout << name << endl;
           cout << age << endl;
           if (age >= 18) {
            cout << name << " is an adult!" << endl;
           }
           else{
            cout << name << " is a minor!" << endl;
           }
        }

    private:
        string name;
        int age;
};

int main(){
    Person p1;
    p1.setDetails("Aston Martin", 72);
    p1.getDetails();
    return 0;
}
