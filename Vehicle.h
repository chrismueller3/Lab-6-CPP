#pragma once

#include<iostream>
class Vehicle {
	int numDoors, numWheels;
    float engineEfficiency;
public:
	Vehicle();
	Vehicle(int w, int d);
	Vehicle(int w);
	void printVehicle(void);
	Vehicle(Vehicle&);
	Vehicle(Vehicle*);
	Vehicle& operator=(Vehicle&);
	bool operator==(const Vehicle&);
	bool operator!=(const Vehicle&);
	Vehicle operator++();
	Vehicle operator++(int);
	Vehicle operator--();
	Vehicle operator--(int);
	friend std::ostream& operator<<(std::ostream& const, const Vehicle&);
};

