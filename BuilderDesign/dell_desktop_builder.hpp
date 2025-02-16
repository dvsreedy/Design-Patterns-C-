#ifndef dell_desktop_builder_H
#define dell_desktop_builder_H

#include "desktop_builder.hpp"

class DellDesktopBuilder : public DesktopBuilder{
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