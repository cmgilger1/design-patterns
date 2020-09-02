// ConcreteProductB2

#ifndef WINDOWS_SCROLLBAR_H_
#define WINDOWS_SCROLLBAR_H_

#include "Scrollbar.h"
#include <iostream>

class WindowsScrollbar : public Scrollbar
{
private:
    void Create() override
    {
        std::cout << "Creating Windows Scrollbar\n";
    }
};

#endif /* WINDOWS_SCROLLBAR_H_ */