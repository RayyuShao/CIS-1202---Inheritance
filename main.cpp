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
    v.displayInfo();
    cout << endl;
    // Part 2 - Car
    int numDoors;
    cout << "Car: " << endl;
    cout << "Enter manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter number of doors: ";
    cin >> numDoors;
    cout << endl;

    Car c(manufacturer, yearBuilt, numDoors);
    cout << "Car Information:" << endl;
    c.displayInfo();
    cout << endl;

    // Part 3 - Truck
    int towingCapacity;
    cout << "Truck: " << endl;
    cout << "Enter manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity: ";
    cin >> towingCapacity;
    cout << endl;

    Truck t(manufacturer, yearBuilt, towingCapacity);
    cout << "Truck Information:" << endl;
    t.displayInfo();

    return 0;
}