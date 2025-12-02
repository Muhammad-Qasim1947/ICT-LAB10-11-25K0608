// Question 3: Product Class
// Create a class Product with private data members name and price.
//  Write public setter and getter methods for name and price.
//  Ensure that the price cannot be negative. If it is, print &quot;Price cannot be negative!&quot;.
//  In main(), create a Product object with name &quot;Laptop&quot; and price 75000, then display
// them.

#include <iostream>
#include <string>
using namespace std;

class product
{
private:
    string membername;
    float price;

public:
    void setmembername(string name)
    {
        membername = name;
    }

    void setprice(float cost)
    {
        if (cost < 0)
        {
            cout << "Price cannot be negative!" << endl;
            price = 0;
        }
        else
        {
            price = cost;
        }
    }

    string getname()
    {
        return membername;
    }

    float getprice()
    {
        return price;
    }

    void input()
    {
        string name ;
        float cost ;

        cout << "Enter The Member Name : ";
        cin >> name;
        cout << "Enter The Product Price : ";
        cin >> cost;

        setmembername(name);  // use setter
        setprice(cost); 
    }

    void display() {
        cout << "\nMember Name: " << membername << endl;
        cout << "Product Price: " << price << endl;
    }
};

int main()
{
    product p;

    p.input();
    p.display();

    return 0 ;
}