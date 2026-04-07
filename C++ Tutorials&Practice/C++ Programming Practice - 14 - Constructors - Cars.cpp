#include <iostream>
#include <string>

using namespace std;

class Car{
    public:
        Car(string b){
        brand = b;
        }
        string getBrand(){
        return brand;
        }



    private:
        string brand;
};

int main(){
    Car car1("Bugatti");
    cout << car1.getBrand();

    return 0;
}
