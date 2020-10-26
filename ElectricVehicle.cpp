//
// Created by Chris on 10/25/2020.
//

#include "ElectricVehicle.h"
using namespace std;

ElectricVehicle :: ElectricVehicle(float batterySize, float efficiency) : Vehicle() {
    currentCharge=batterySize;
    maximumCharge=batterySize;
    engineEfficiency=efficiency;
}

float ElectricVehicle :: calculateRange() {
    return (currentCharge*100)/engineEfficiency;
}

float ElectricVehicle :: percentEnergyRemaining() {
    return currentCharge/maximumCharge;
}

void ElectricVehicle :: drive(float km) {
    currentCharge-=(km/100)*engineEfficiency;
    if (currentCharge<=0) {
        cout << "Your car is out of energy!";
    }
}

ElectricVehicle :: ~ElectricVehicle() {
    cout << "In Electric Vehicle Destructor" << endl;
}
