// This program calculates the shipping cost of a package 

#include <iostream>
using namespace std;

int main()
{
    double weight;
    double distance;

    cout << "Enter the package weight in kilograms: "; 
    cin >> weight;

    cout << "Enter the shipping distance in miles: ";
    cin >> distance;

    if (weight <= 0 || weight > 20 || distance < 10 || distance > 3000)
    {
        cout << "Invalid weight or shipping distance" << endl;
        return 1;
    }

    return 0;
}