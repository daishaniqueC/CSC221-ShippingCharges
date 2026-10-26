// This program calculates the shipping cost of a package 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double weight;
    double distance;
    double rate;
    double shippingUnits;
    double totalCharge;

    cout << "Enter the package weight in kilograms: "; 
    cin >> weight;

    cout << "Enter the shipping distance in miles: ";
    cin >> distance;

    if (weight <= 0 || weight > 20 || distance < 10 || distance > 3000)
    {
        cout << "Invalid weight or shipping distance" << endl;
        return 1;
    }
    if (weight <= 2)
    {
        rate = 1.10;
    }
    else if (weight <= 6)
    {
        rate = 2.20;
    }
    else if (weight <= 10)
    {
        rate = 3.70;
    }
    else
    {
        rate = 4.80;
    }

    shippingUnits = ceil(distance / 500.0);
    totalCharge = rate * shippingUnits;

    cout << fixed << setprecision(2);
    cout << "Total shipping charge: $" << totalCharge << endl;

    return 0;
}