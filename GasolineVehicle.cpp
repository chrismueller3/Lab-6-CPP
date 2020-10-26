//
// Created by Chris on 10/25/2020.
//

#include "GasolineVehicle.h"
using namespace std;


GasolineVehicle :: GasolineVehicle(float gasSize, float efficiency) : Vehicle() {
    currentGasoline=gasSize;
    maximumGasoline=gasSize;
    engineEfficiency=efficiency;
}

float GasolineVehicle :: calculateRange() {
    return (currentGasoline*100)/engineEfficiency;
}

float GasolineVehicle :: percentEnergyRemaining() {
    return currentGasoline/maximumGasoline;
}

void GasolineVehicle :: drive(float km) {
    currentGasoline-=(km/100)*engineEfficiency;
    if (currentGasoline<=0) {
        cout << "Your car is out of energy!";
    }
}
