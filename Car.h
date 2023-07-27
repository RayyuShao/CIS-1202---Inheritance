// Raymond Shao
// CIS 1202 800
// July 26, 2023

#pragma once

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car {
private: 
	int numDoors;
public: 
    Car();
    Car(string manufacturer, int yearBuilt, int numDoors);
    int getNumDoors() const;
    void setNumDoors(int numDoors);
    void displayInfo() const;
};

#endif