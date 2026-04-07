/** Question 1: Basic Class Implementation
Create a Book class with:

Private attributes: title (string), pages (int)

Public constructor that sets both attributes

Public methods: getTitle(), getPages() **/

#include <iostream>
#include <string>

using namespace std;

class Book{

private:
    string title;
    int pages;

public:
    Book(string title, int pages){
        this -> title = title;
        this -> pages = pages;
    }
    string getTitle(){
        return title;
    }
    int getPages(){
        return pages;
    }

};

int main(){
    Book myBook("The Story of Lengman", 200);
    cout << myBook.getTitle() << " has " << myBook.getPages() << " pages.";

    return 0;
}
