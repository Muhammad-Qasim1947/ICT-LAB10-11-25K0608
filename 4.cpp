// Question 4: Employee Class
// Create a class Employee with private data members id and salary.
//  Write setter and getter methods for both.
//  Add validation in the setter of salary so that it cannot be less than 0.
//  In main(), create an employee with id 101 and salary 50000, then display the details.

#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    int id;
    float salary;

public:
    void setid(int ID)
    {
        id = ID;
    }

    void setsalary(float earning)
    {
        if (earning < 0)
        {
            cout << "The Salary Cannot Be Negative" << endl;
            salary = 0;
        }
        else
        {
            salary = earning;
        }
    }

    int getid()
    {
        return id;
    }

    float getsalary()
    {
        return salary;
    }

    void input()
    {
        int ID;
        float earning;

        cout << "Enter The ID Number : ";
        cin >> ID;

        cout << "Enter The Salary : ";
        cin >> earning;

        setid(ID);          // use setter
        setsalary(earning); // use setter with validation
    }

    void display() {
        cout << "\nMember ID : " << id << endl;
        cout << "Member Salary : " << salary << endl;
    }
};

int main()
{
    employee emp;

    emp.input();
    emp.display();

    return 0;
}
