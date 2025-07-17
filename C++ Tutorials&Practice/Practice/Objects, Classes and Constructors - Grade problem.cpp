#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(string name, int age, int grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getGrade() {
        return grade;
    }

private:
    string name;
    int age;
    int grade;
};

int main() {
    Student myStudent("Lenganji", 17, 12);

    cout << "Name: " << myStudent.getName() << endl;
    cout << "Age: " << myStudent.getAge() << endl;
    cout << "Grade: " << myStudent.getGrade() << endl;

    return 0;
}
