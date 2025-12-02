// Question 2: Rectangle Class
// Create a class Rectangle with private data members length and width.
//  Write public methods setLength, setWidth, getLength, getWidth.
//  Add a method area() that returns the area of the rectangle (length × width).
//  In main(), create a rectangle with length 5 and width 3, then print its length, width, and
// area.


#include <iostream>
#include <string>
using namespace std;

class rectangle {
private :
    int length ;
    int width ;

public :
    void setlength(int len){
        length = len ;
    }

    void setwidth(int wid){
        width = wid ;
    }

    int getlength(){
        return length ;
    }

    int getwidth(){
        return width ;
    }

    int area() {
        return length * width;
    }

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

} ;

int main(){
    rectangle r ;

    r.input() ;

    cout << "Length : " << r.getlength() << endl ;
    cout << "Width : " << r.getwidth() << endl ;
    cout << "Area : " << r.area() << endl ;

    return 0;
}