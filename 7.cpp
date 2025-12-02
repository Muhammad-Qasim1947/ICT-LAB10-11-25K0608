// Create a base class Vehicle with a data member speed and a method showSpeed() that prints
// the speed.
// Create a derived class Car that inherits from Vehicle and adds a method fuelType() that prints
// &quot;Petrol&quot;.
// In main(), create a Car object, set its speed, and display both speed and fuel type.

#include <iostream>
using namespace std;

// Base class
class Vehicle {
private:
    float speed;  // make speed private for good OOP

public:
    void setSpeed(float s) {
        speed = s;
    }

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void fuelType() {
        cout << "Fuel Type: Petrol" << endl;
    }
};

int main() {
    Car myCar;
    float inputSpeed;

    cout << "Enter the speed of the car: ";
    cin >> inputSpeed;

    myCar.setSpeed(inputSpeed);  // set speed via setter

    myCar.showSpeed();   // inherited method
    myCar.fuelType();    // own method

    return 0;
}
