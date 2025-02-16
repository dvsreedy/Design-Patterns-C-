#include "director.hpp"
#include "dell_desktop_builder.hpp"
#include "hp_desktop_builder.hpp"


#include <iostream>
using namespace std;

int main(){
    // Build the concrete builder objects;
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();
    HPDesktopBuilder* hpDesktopBuilder = new HPDesktopBuilder();


    // Build the director objects by passing the concrete builder objects as params
    DesktopDirector* director1 = new DesktopDirector(dellDesktopBuilder);
    DesktopDirector* director2 = new DesktopDirector(hpDesktopBuilder);

    // Build the desktops using the director objects, which in turn uses the concrete builder objects.
    Desktop* dellDesktop = director1->BuildDesktop();
    Desktop* hpDesktop = director2->BuildDesktop();

    cout<<"Dell Desktop Specs: "<<endl;
    dellDesktop->showSpecs();
    cout<<endl;
    cout<<"HP Desktop Specs: "<<endl;
    hpDesktop->showSpecs();

    return 0;
}