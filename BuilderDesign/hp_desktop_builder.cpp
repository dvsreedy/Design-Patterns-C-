#include "hp_desktop_builder.hpp"


void HPDesktopBuilder::setMonitor(){
    desktop->setMonitor("HP Monitor");
}

void HPDesktopBuilder::setKeyboard(){
    desktop->setKeyboard("HP Keyboard");
}

void HPDesktopBuilder::setMouse(){
    desktop->setMouse("HP Mouse");
}

void HPDesktopBuilder::setCPU(){
    desktop->setCPU("HP CPU");
}

void HPDesktopBuilder::setGPU(){
    desktop->setGPU("HP GPU");
}

void HPDesktopBuilder::setRAM(){
    desktop->setRAM("HP RAM");
}

void HPDesktopBuilder::setStorage(){
    desktop->setStorage("HP Storage");
}
