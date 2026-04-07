#include <iostream>
using namespace std;

class LengClass{
    public:
        void justOutput(){
            cout << "Learning about Classes and Objects!" << endl;
        }
};

int main()
{
    LengClass lengObject;
    lengObject.justOutput();

    return 0;
}
