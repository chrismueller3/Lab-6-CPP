#pragma once

#include<iostream>
class Vehicle {
	int numDoors, numWheels;
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
//	Vehicle operator++();
//	Vehicle operator++(int);
//	Vehicle operator--();
//	Vehicle operator--(int);
	friend std::ostream& operator<<(std::ostream& const, const Vehicle&);
	virtual float calculateRange() = 0;
	virtual float percentEnergyRemaining() = 0;
	virtual void drive(float km) = 0;
    float engineEfficiency;
};

