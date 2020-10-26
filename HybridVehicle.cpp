//
// Created by Chris on 10/25/2020.
//

#include "HybridVehicle.h"
using namespace std;


HybridVehicle :: HybridVehicle(float gasSize, float gasEfficiency, float batterySize, float batteryEfficiency)
: GasolineVehicle(gasSize, gasEfficiency),
ElectricVehicle(batterySize, batteryEfficiency) {
    currentGasoline = gasSize;
    maximumGasoline = gasSize;
    engineEfficiencyElectric = batteryEfficiency;
    currentCharge = batterySize;
    maximumCharge = batterySize;
    engineEfficiencyGas = gasEfficiency;

}

float HybridVehicle :: calculateRange() {
    double electricRange = (currentCharge * 100) / engineEfficiencyElectric;
    double gasRange = (currentGasoline * 100) / engineEfficiencyGas;
    return gasRange + electricRange;
    //return ((currentCharge*100)/engineEfficiencyElectric+(currentGasoline*100)/engineEfficiencyGas);
    //return GasolineVehicle::calculateRange() + ElectricVehicle::calculateRange();
}

float HybridVehicle :: percentEnergyRemaining() {
    return 100.0f*(currentCharge/maximumCharge+currentGasoline/maximumGasoline)/2;
}

void HybridVehicle :: drive(float km) {
    if (currentCharge>=0) {
        currentCharge-=(km/100)*engineEfficiencyElectric;
        if (currentCharge < 0) {
            km = currentCharge / engineEfficiencyElectric*-100;
            currentCharge = 0;
        }
    } 
    if (currentGasoline>=0) {
        currentGasoline-=(km/100)*engineEfficiencyGas;
    }
    if (currentCharge<=0 && currentGasoline<=0) {
        cout << "Your car is out of energy!";
    }
}

HybridVehicle :: ~HybridVehicle() {
    cout << "In Hybrid Vehicle Destructor" << endl;
}
