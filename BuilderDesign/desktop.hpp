#ifndef desktop_H
#define desktop_H

#include <string>

using namespace std;

class Desktop{
    string Monitor;
    string Keyboard;
    string Mouse;
    string CPU;
    string GPU;
    string RAM;
    string Storage;

    public:
        void setMonitor(string pMonitor);
        void setKeyboard(string pKeyboard);
        void setMouse(string pMouse);    
        void setCPU(string pCPU);
        void setGPU(string pGPU);
        void setRAM(string pRAM);
        void setStorage(string pStorage);
        void showSpecs();
};

#endif