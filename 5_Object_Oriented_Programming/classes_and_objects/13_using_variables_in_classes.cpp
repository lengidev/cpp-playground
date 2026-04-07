#include <iostream>
#include <string>  // Needed for 'string' type

using namespace std;

class LengClass {
    public:
    void setName(string x) {  // Sets the private 'name'
        name = x;
    }
    string getName() {  // Returns the private 'name'
        return name;
    }

    private:
    string name;  // Hidden from outside the class
};

int main() {
    LengClass lengObject;
    lengObject.setName("LengMan");  // Sets name = "LengMan"
    cout << lengObject.getName();   // Gets name and prints it
    return 0;
}
