#include <iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

int main(){
    string vehicleType;
    cin>> vehicleType;
    Vehicle *vehicle;
    if(vehicleType == "car"){
        vehicle = new Car();
    }
    else if(vehicleType == "bike"){
        vehicle = new Bike();
    }
    else{
        cout<<"Invalid vehicle type , exiting"<<endl;
        return -1;
    }
    vehicle->createVehicle();
    return 0;
}