//
// Created by Chris on 10/25/2020.
//

#pragma once


#include "Vehicle.h"

class GasolineVehicle : virtual public Vehicle {
    float currentGasoline, maximumGasoline;
public:
    virtual float calculateRange() override;
    virtual float percentEnergyRemaining() override;
    virtual void drive(float km) override;
    GasolineVehicle(float gasSize, float efficiency);
    ~GasolineVehicle();
};

