// Raymond Shao
// CIS 1202 800
// July 27, 2023

#include "Vehicle.h"
#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : numDoors(0) {}

Car::Car(string manufacturer, int yearBuilt, int numDoors) : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::displayInfo() const {
    // call base class method to display Vehicle info
    Vehicle::displayInfo();

    // display Car info
    cout << "Number of Doors: " << numDoors << endl;
}
