// ConcreteProductA1

#ifndef APPLE_RADIOBUTTON_H_
#define APPLE_RADIOBUTTON_H_

#include "RadioButton.h"
#include <iostream>

class AppleRadioButton : public RadioButton
{
public:
    void Create() override
    {
        std::cout << "Creating Apple Radio Button\n";
    }
};

#endif /* APPLE_RADIOBUTTON_H_ */