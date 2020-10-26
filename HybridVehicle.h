//
// Created by Chris on 10/25/2020.
//

#pragma once


#include "GasolineVehicle.h"
#include "ElectricVehicle.h"

class HybridVehicle : public GasolineVehicle, public ElectricVehicle{

    float currentCharge, maximumCharge, currentGasoline, maximumGasoline, engineEfficiencyElectric, engineEfficiencyGas;
public:
    virtual float calculateRange() override;
    virtual float percentEnergyRemaining() override;
    virtual void drive(float km) override;
    HybridVehicle(float gasSize, float gasEfficiency, float batterySize, float batteryEfficiency);
    ~HybridVehicle();
};

