// Question 10:
// Create a base class Employee with a data member salary and a method displaySalary().
// Create a derived class Manager that inherits from Employee and adds a method bonus() that
// prints &quot;Bonus is 5000&quot;.
// In main(), create a Manager object, set its salary, and display both salary and bonus.


#include <iostream>
#include <string>
using namespace std ;

class employee {
public :
    int salary ;
    
    void displaysalary(){
        cout << "Salary Is : " << salary << endl ;
    }
};

class manager : public employee {
public :
    void bonus(){
        cout << "Bonus Is 5000" << endl ;
    }
};


int main(){
    manager mang ;

    mang.salary = 30000 ;

    mang.displaysalary();
    mang.bonus();

    return 0 ;
}