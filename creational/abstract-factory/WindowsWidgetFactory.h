// ConcreteFactory2

#include "WidgetFactory.h"
#include "WindowsScrollbar.h"
#include "WindowsRadioButton.h"

class WindowsWidgetFactory : public WidgetFactory
{
private:
    Scrollbar* CreateScrollbar()
    {
        Scrollbar* scrollbar(new WindowsScrollbar);
        std::cout << "Creating Windows Scrollbar Pointer\n";
        return scrollbar;
    }

    RadioButton* CreateRadioButton()
    {
        RadioButton* radioButton(new WindowsRadioButton);
        std::cout << "Creating Windows Radio Button Pointer\n";
        return radioButton;
    }
};