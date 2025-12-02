// Create a base class Animal with a method eat() that prints &quot;Animal is eating&quot;.
// Create a derived class Dog that inherits from Animal and has a method bark()
// that prints Dog is barking;.
// In main(), create a Dog object and call both eat() and bark() methods.

#include <iostream>
#include <string>
using namespace std;

class animal {
public :
    void eat(){
        cout << "Animal Is Eating" << endl ;
    }
} ;

class Dog : public animal {
public : 
    void bark(){
        cout << "DOG IS BARKING" << endl ;
    }
};

int main(){
    Dog d ;

    d.eat();
    d.bark();
}