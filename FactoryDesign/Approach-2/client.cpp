#include <iostream>
#include "vehicle_factory.hpp"
using namespace std;

int main(){
    string vehicleType;
    cin>> vehicleType;
    Vehicle *vehicle = vehicleFactory::getVehicle(vehicleType);
    if (vehicle == nullptr){
        cout<< "This is an invalid type vehicle"<<endl;
    }
    else{
        vehicle->createVehicle();
    }
    return 0;
}