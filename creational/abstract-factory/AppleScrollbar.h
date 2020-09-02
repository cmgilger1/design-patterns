// ConcreteProductB1

#ifndef APPLE_SCROLLBAR_H_
#define APPLE_SCROLLBAR_H_

#include "Scrollbar.h"
#include <iostream>

class AppleScrollbar : public Scrollbar
{
private:
    void Create() override
    {
        std::cout << "Creating Apple Scrollbar\n";
    }
};

#endif /* APPLE_SCROLLBAR_H_ */