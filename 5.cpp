// Question 5: Car Class
// Create a class Car with private data members speed and fuel.
//  Write setter methods to set speed and fuel. Ensure fuel cannot be negative.
//  Write getter methods to display speed and fuel.
//  In main(), create a car with speed 120 km/h and fuel 50 liters, then display its details.

#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    float speed;
    float fuel;

public:
    void setspeed(float s)
    {
        speed = s;
    }

    void setfuel(float f)
    {
        if (f < 0)
        {
            cout << "Fuel Cannot Be Negative" << endl;
            fuel = 0;
        }
        else
        {
            fuel = f;
        }
    }

    float getspeed()
    {
        return speed;
    }

    float getfuel()
    {
        return fuel;
    }

    void input()
    {
        float s ;
        float f ;

        cout << "Enter The Speed : ";
        cin >> s;
        cout << "Enter The Fuel : ";
        cin >> f;

        setspeed(s);
        setfuel(f);
    }

    void display() {
        cout << "\nSpeed : " << speed << endl;
        cout << "Fuel : " << fuel << endl;
    }
};

int main()
{ car c1 ;

  c1.input();
  c1.display();

  return 0;
}