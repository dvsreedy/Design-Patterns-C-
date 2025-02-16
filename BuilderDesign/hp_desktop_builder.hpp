#ifndef hp_desktop_builder
#define hp_desktop_builder_H


#include "desktop_builder.hpp"

class HPDesktopBuilder : public DesktopBuilder{
    public:
        void setMonitor();
        void setKeyboard();
        void setMouse();
        void setCPU();
        void setGPU();
        void setRAM();
        void setStorage();
};


#endif