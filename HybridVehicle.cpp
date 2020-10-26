//
// Created by Chris on 10/25/2020.
//

#include "HybridVehicle.h"
using namespace std;


HybridVehicle :: HybridVehicle(float gasSize, float gasEfficiency, float batterySize, float batteryEfficiency)
: GasolineVehicle(gasSize, gasEfficiency),
ElectricVehicle(batterySize, batteryEfficiency) {

}

float HybridVehicle :: calculateRange() {
    return ((currentCharge*100)/engineEfficiencyElectric+(currentGasoline*100)/engineEfficiencyGas);
}

float HybridVehicle :: percentEnergyRemaining() {
    return (currentCharge/maximumCharge+currentGasoline/maximumGasoline)/2;
}

void HybridVehicle :: drive(float km) {
    if (currentCharge<=0) {
        currentCharge-=(km/100)*engineEfficiencyElectric;
    } else if (currentGasoline<=0) {
        currentGasoline-=(km/100)*engineEfficiencyGas;
    }
    if (currentCharge<=0 && currentGasoline<=0) {
        cout << "Your car is out of energy!";
    }
}

HybridVehicle :: ~HybridVehicle() {
    cout << "In Hybrid Vehicle Destructor" << endl;
}
