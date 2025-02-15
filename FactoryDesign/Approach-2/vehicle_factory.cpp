#include "vehicle_factory.hpp"

Vehicle* vehicleFactory::getVehicle(string vehicleType){
    Vehicle *vehicle = nullptr;
    if(vehicleType == "car"){
        vehicle = new Car();
    }
    else if(vehicleType == "bike"){
        vehicle = new Bike();
    }
    else{
        cout<<"Invalid vehicle type , exiting"<<endl;
        return vehicle;
    }
    return vehicle;
}