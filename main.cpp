// Raymond Shao
// CIS 1202 800
// July 28, 2023

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
    // Part 1 - Vehicle
    // prompting Vehicle info
    string manufacturer;
    int yearBuilt;
    cout << "Vehicle: " << endl;
    cout << "Enter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << endl;

    Vehicle v(manufacturer, yearBuilt);
    cout << "Vehicle Information:" << endl;
    v.displayInfo();    // display Vehicle info
    cout << endl;
    // Part 2 - Car
    // prompting Car info
    int numDoors;
    cout << "Car: " << endl;
    cout << "Enter manufacturer: ";
    cin.ignore();   // clear characters from input buffer
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter number of doors: ";
    cin >> numDoors;
    cout << endl;

    Car c(manufacturer, yearBuilt, numDoors);
    cout << "Car Information:" << endl;
    c.displayInfo();    // display Car info
    cout << endl;

    // Part 3 - Truck
    // prompting truck info
    int towingCapacity;
    cout << "Truck: " << endl;
    cout << "Enter manufacturer: ";
    cin.ignore();   // clear characters from input buffer
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity: ";
    cin >> towingCapacity;
    cout << endl;

    Truck t(manufacturer, yearBuilt, towingCapacity);
    cout << "Truck Information:" << endl;
    t.displayInfo();    // display Truck info

    return 0;
}