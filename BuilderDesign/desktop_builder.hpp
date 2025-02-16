#ifndef desktop_builder
#define desktop_builder

#include "desktop.hpp"

class DesktopBuilder{
    protected:
        Desktop* desktop;
    public:
        DesktopBuilder(){
            desktop = new Desktop();
        }
        virtual void setMonitor() = 0;
        virtual void setKeyboard() = 0;
        virtual void setMouse() = 0;
        virtual void setCPU() = 0;
        virtual void setGPU() = 0;
        virtual void setRAM() = 0;
        virtual void setStorage() = 0;

        virtual Desktop* getDesktop(){
            return desktop;
        }

};


#endif