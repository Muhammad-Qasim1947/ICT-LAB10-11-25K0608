// Create a base class Shape with a method area() that prints &quot;Area of shape&quot;.
// Create a derived class Rectangle with length and width data members, and override the area()
// method to print the rectangle’s area.
// In main(), create a Rectangle object, set its length and width, and call the area() method.

#include <iostream>
#include <string>
using namespace std;

class shape {
public :
    virtual void area(){
        cout << "Area Of The Shape : " << endl ;
    }
};

class rectangle : public shape {
public :   
    int length ;
    int width ;

    void area(){
       int a = length * width ;
       cout << "Area Of Rectangle Is : " << a << endl ;
    }
};

int main(){
    rectangle r ;

    r.length = 5 ;
    r.width = 3 ;

    r.area();

    return 0 ;
}