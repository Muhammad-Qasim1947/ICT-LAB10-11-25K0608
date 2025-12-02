#include <iostream>
#include <string>
using namespace std;

class student{
private :
    string name ;
    int age ;

public :
    // setter for name
    void setname(string n){
        name = n ;
    }    

    // setter for age
    void setage(int a){
        age = a ;
    }

    // getter for name
    string getname(){
        return name ;
    }

    // getter for age 
    int getage(){
        return age ;
    }
} ;

int main(){
    student s1 ;

    s1.setname("Qasim");
    s1.setage(19);

    cout << "Name : " << s1.getname() << endl ;
    cout << "Age " << s1.getage() << endl ;

}