// ConcreteProductA2

#ifndef WINDOWS_RADIOBUTTON_H_
#define WINDOWS_RADIOBUTTON_H_

#include "RadioButton.h"
#include <iostream>

class WindowsRadioButton : public RadioButton
{
private:
    void Create() override
    {
        std::cout << "Creating Windows Radio Button\n";
    }
};

#endif /* WINDOWS_RADIOBUTTON_H_ */