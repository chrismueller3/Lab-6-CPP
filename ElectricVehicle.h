//
// Created by Chris on 10/25/2020.
//

#pragma once


#include "Vehicle.h"

class ElectricVehicle : virtual public Vehicle {
    float currentCharge, maximumCharge;
public:
    virtual float calculateRange() override;
    virtual float percentEnergyRemaining() override;
    virtual void drive(float km) override;
    ElectricVehicle(float batterySize, float efficiency);
    ~ElectricVehicle();
};


