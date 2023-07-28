// Raymond Shao
// CIS 1202 800
// July 28, 2023

#pragma once

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle  // inheritance
{
private: 
	int numDoors;
public: 
    // constructor
    Car();
    Car(string manufacturer, int yearBuilt, int numDoors);

    // getter and setter for numDoors
    int getNumDoors() const;
    void setNumDoors(int numDoors);

    void displayInfo() const;
};

#endif