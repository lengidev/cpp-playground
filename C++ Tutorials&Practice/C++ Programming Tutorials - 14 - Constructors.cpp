#include <iostream>
#include <string>  // Needed for 'string' type

using namespace std;

class LengClass {
    public:
        LengClass(string z) {  // Constructor
        setName(z);        // Calls setName() to assign 'z' to 'name'
        }
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
    LengClass lengObject("Lengman Leng");
    cout << lengObject.getName();

    return 0;
}
