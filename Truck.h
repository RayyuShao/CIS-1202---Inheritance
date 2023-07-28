// Raymond Shao
// CIS 1202 800
// July 28, 2023

#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck();
    Truck(string manufacturer, int yearBuilt, int towingCapacity);

    // getter and setter for towingCapacity
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);

    void displayInfo() const;
};

#endif
