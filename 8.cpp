// Create a base class Person with data members name and age, and a method displayInfo() to
// print them.
// Create a derived class Student that inherits from Person and adds a data member rollNo with a
// method displayRollNo().
// In main(), create a Student object, set its name, age, and roll number, then display all details.

#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string membername;
    int age;

    void displayinfo()
    {
        cout << "Member Name : " << membername << endl;
        cout << "Age : " << age << endl;
    }
};

class student : public person
{
public:
    int rollNo;

    void displayRollNo()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    student s;

    // Set details
    cout << "Enter name: ";
    cin >> s.membername;
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter roll number: ";
    cin >> s.rollNo;

    s.displayinfo();
    s.displayRollNo();

    return 0;
}