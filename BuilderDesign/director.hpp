#ifndef director_H
#define director_H



#include "desktop_builder.hpp"


class DesktopDirector{

    private:
        DesktopBuilder* desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder* builder){
            desktopBuilder = builder;
        }

        Desktop* getDesktop(){
            return desktopBuilder->getDesktop();
        }

        Desktop* BuildDesktop(){
            desktopBuilder->setMonitor();
            desktopBuilder->setKeyboard();
            desktopBuilder->setMouse();
            desktopBuilder->setCPU();
            desktopBuilder->setGPU();
            desktopBuilder->setRAM();
            desktopBuilder->setStorage();
            return desktopBuilder->getDesktop();
        }
};


#endif 