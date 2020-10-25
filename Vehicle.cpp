



#include "Vehicle.h"
using namespace std;
int numDoors, numWheels;


    Vehicle :: Vehicle(int w, int d) {
        numDoors = d;
        numWheels = w;
        cout << "In constructor with 2 parameters" << endl;
    }
    Vehicle :: Vehicle(int w) : Vehicle(w, 4) {
        cout << "In constructor with 1 parameters" << endl;
    }
    Vehicle :: Vehicle() : Vehicle(4) {
        cout << "In constructor with 0 parameters" << endl;
    }

    void Vehicle :: printVehicle() {
        cout << "Number of doors: " << numDoors << endl;
        cout << "Number of wheels: " << numWheels << endl;
    }

    Vehicle :: Vehicle(Vehicle& copy) //pass in with [object]
    {
        numDoors = copy.numDoors;
        numWheels = copy.numWheels;
    }

    Vehicle :: Vehicle(Vehicle *copy) : Vehicle(*copy) //pass in with [&object]
    {
    }

    Vehicle& Vehicle :: operator=(Vehicle& copy) 
    {
        numDoors = copy.numDoors;
        numWheels = copy.numWheels;

        return copy;
    }

    bool Vehicle :: operator==(const Vehicle& otherVehicle) {
        if (otherVehicle.numDoors == numDoors && otherVehicle.numWheels == numWheels) {
            return true;
        }
        else {
            return false;
        }
    }

    bool Vehicle :: operator!=(const Vehicle& otherVehicle) {
        if (otherVehicle.numDoors == numDoors && otherVehicle.numWheels == numWheels) {
            return false;
        }
        else {
            return true;
        }
    }

    //For Vehicle++
    Vehicle Vehicle :: operator++() {
        numDoors++;
        numWheels++;
        return Vehicle(this);
    }
    //For ++Vehicle
    Vehicle Vehicle :: operator++(int i) {
        Vehicle temp(this);
        numDoors++;
        numWheels++;
        return temp;
    }

    //For Vehicle--
    Vehicle Vehicle :: operator--() {
        numDoors--;
        numWheels--;
        return Vehicle(this);
    }
    //For --Vehicle
    Vehicle Vehicle :: operator--(int i) {
        Vehicle temp(this);
        numDoors--;
        numWheels--;
        return temp;
    }

   /* ostream& Vehicle :: operator<<(ostream& const out, const Vehicle& v) {

    }*/

    ostream& operator<<(ostream& out, const Vehicle& v) {
         out << "Number of doors: " << v.numDoors << endl
         << "Number of wheels: " << v.numWheels << endl;
         return out;
     }

