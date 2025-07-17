#include <iostream>
#include <string>

using namespace std;

class Rectangle{
public:
    double width;
    double length;

    Rectangle(double width, double length){
        this -> width = width;
        this -> length = length;
    } //constructors have no return type

    double calArea(){
        return width * length;
    }

    double findPerimeter(){
       return 2 * (width + length);
    }

};

int main(){
    Rectangle calRectangle(2, 2);
    cout << "Area: "<< calRectangle.calArea() << endl;
    cout << "Perimeter: "<< calRectangle.findPerimeter() << endl; //whenever you call methods add ()

    return 0;
}
