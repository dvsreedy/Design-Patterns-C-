#include "desktop.hpp"

#include <iostream>

using namespace std;

void Desktop::setMonitor(string pMonitor){
    this->Monitor = pMonitor;
}

void Desktop::setKeyboard(string pKeyboard){
    this->Keyboard = pKeyboard;
}

void Desktop::setMouse(string pMouse){
    this->Mouse = pMouse;
}

void Desktop::setCPU(string pCPU){
    this->CPU = pCPU;
}

void Desktop::setGPU(string pGPU){
    this->GPU = pGPU;
}

void Desktop::setRAM(string pRAM){
    this->RAM = pRAM;
}

void Desktop::setStorage(string pStorage){
    this->Storage = pStorage;
}

void Desktop::showSpecs(){
    cout << "Monitor: " << Monitor << endl;
    cout << "Keyboard: " << Keyboard << endl;
    cout << "Mouse: " << Mouse << endl;
    cout << "CPU: " << CPU << endl;
    cout << "GPU: " << GPU << endl;
    cout << "RAM: " << RAM << endl;
    cout << "Storage: " << Storage << endl;
}