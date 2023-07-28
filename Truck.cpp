// Raymond Shao
// CIS 1202 800
// July 28, 2023

#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : towingCapacity(0) {}

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const {
    // Call base class method to display Vehicle info
    Vehicle::displayInfo();

    // Display Truck info
    cout << "Towing Capacity: " << towingCapacity << endl;
}
